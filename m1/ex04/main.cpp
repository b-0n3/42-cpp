//
// Created by Abdelouahad Ait hamd on 1/6/22.
//

#include <iostream>
#include <fstream>
int main(int argc, char **argv)
{
    std::fstream replace;
    std::fstream file;

    std::string buffer;
    std::string replaceName(argv[1]);
    std::string content;

    if (argc == 4)
    {
        file.open(argv[1],std::ios::in);
        replace.open(replaceName + "." + "replace",std::ios::out);
        while(std::getline(file, buffer))
        {
            content = content + buffer;
            content = content + '\n';
        }
        std::cout<<content<<std::endl;
    }
}