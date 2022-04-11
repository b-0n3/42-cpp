//
// Created by Abdelouahad Ait hamd on 3/31/22.
//

#ifndef CPP_ITER_H
#define CPP_ITER_H
#include <iostream>
template <typename T>
void iter(T *tab, int size, void (*f)(T &))
{
    if (tab == nullptr)
        return;
    for (int i = 0; i < size; i++)
        f(tab[i]);
}

#endif //CPP_ITER_H
