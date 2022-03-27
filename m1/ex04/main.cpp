    //
// Created by Abdelouahad Ait hamd on 1/6/22.
//

#include <iostream>
#include <fstream>
#define GET_OUTPUT_NAME(original)	std::string(original) + ".replace"

std::string replaceLine(std::string &line ,
                        std::string &needle ,
                        std::string &replacePhrase,
                        std::string result,
                        std::size_t start) {
    std::size_t pos;
    pos = line.find(needle , start);
    if (pos == (std::size_t )-1)
        return result + line.substr(start);
    result += line.substr(start , pos - start) + replacePhrase;
    start = pos   + needle.length();
    return replaceLine(line , needle, replacePhrase, result, start);
}

int readAndReplace(std::fstream &input,
                   std::fstream &output,
                   std::string &needle,
                   std::string &replacePhrase)
{
    std::string buffer;
    std::string result;
    if (!std::getline(input,buffer , input.widen(std::ifstream::traits_type::eof())))
        return 0;

    output << replaceLine(buffer, needle, replacePhrase, result,  0);
    return readAndReplace(input , output , needle ,replacePhrase);
}

int main(int argc, char **argv)
{
    std::fstream output;
    std::fstream input;
    if (argc == 4)
    {
        input.open(argv[1],std::ios::in);
        if (!input.is_open()) {
            std::cerr << "could not open file :" << argv[1] << std::endl;
            return 1;
        }
        if (input.peek() == std::ifstream::traits_type::eof())
        {
            std::cerr << "empty file :" << argv[1] << std::endl;
            return 1;
        }

        output.open(GET_OUTPUT_NAME(argv[1]),std::ios::out);
        if (!output.is_open())
        {
            std::cerr<< "could not open file: " << GET_OUTPUT_NAME(argv[1]) << std::endl;

            return 1;
        }
        std::string needle = std::string(argv[2]);
        std::string replacePhrase = std::string (argv[3]);
        return readAndReplace(input , output ,
                              needle,
                              replacePhrase);
    }
    std::cerr << "error : arguments" << std::endl;
    return 1;
}