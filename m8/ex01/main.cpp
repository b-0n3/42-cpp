//
// Created by Abdelouahad Ait hamd on 3/31/22.
//
#include <iostream>
#include "Span.h"

int main()
{
    {
        Span s(10);

        for (size_t i = 0; i < 10; i++)
            s.addNumber(i);
         try
         {
             s.addNumber(12);
         }
         catch(const std::exception& e)
         {
             std::cerr << e.what() << '\n';
         }
    }

    {
        Span s(100);
        std::vector<int> vec;

        for (size_t i = 0; i < 20; i++)
            s.addNumber(9);

        for (size_t i = 0; i < 50; i++)
            vec.push_back(0);

        s.addNumber(vec.begin(), vec.end());

        try
        {

            s.addNumber(vec.begin(), vec.end());
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }

    }

    {
        Span s(1e6);

        for (size_t i = 0; i < 1e6; i++)
            s.addNumber(i);

        std::cout << s.longestSpan() << std::endl;

        std::cout << s.shortestSpan() << std::endl;

    }


    {
        Span a(19);
        for (int i = 19; i > 0; --i)
            a.addNumber(i);

        Span b(10);
        b = a;

        std::cout << a.shortestSpan() << std::endl;
        std::cout << a.longestSpan() << std::endl;
        std::cout << b.shortestSpan() << std::endl;
        std::cout << b.longestSpan() << std::endl;
    }




    return 0;
}