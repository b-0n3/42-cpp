//
// Created by Abdelouahad Ait hamd on 3/31/22.
//

#include <vector>
#include "easyfind.h"
int main()
{
    std::vector<int> v(10);
    for (int i = 0; i < 10; i++)
        v.push_back(i);

    try
    {
      std::cout<<  easyfind(v , 5) << std::endl;
      std::cout<< easyfind(v, 20) <<std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}