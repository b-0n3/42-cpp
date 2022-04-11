//
// Created by Abdelouahad Ait hamd on 3/31/22.
//

#include "iter.h"
void print(std::string &s)
{
    std::cout << s << std::endl;
}
void printInt(int &i)
{
    std::cout << i << std::endl;
}
int main()
{
    std::string str[] = {"Hello", "World", "!", "C++"};
    iter(str,3,print);
    int   i[] = {1,2,3,
               4,5,6,7,
               8,9,10};
    iter(i,10,printInt);

}