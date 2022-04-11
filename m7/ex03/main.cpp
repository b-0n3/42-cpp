//
// Created by Abdelouahad Ait hamd on 3/31/22.
//

#include "Array.h"

int main()
{
    Array<int> a(10);
    try{
        for (int i = 0; i < a.size(); i++)
            std::cout<< a[i] << std::endl;
        std::cout<< a[19] << std::endl;
    }catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
    Array<std::string> b;
    try{

            std::cout<< b[0] << std::endl;
        std::cout<< b[b.size()] << std::endl;
    }catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
    return 0;
}