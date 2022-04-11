//
// Created by Abdelouahad Ait hamd on 3/31/22.
//

#ifndef CPP_EASYFIND_H
#define CPP_EASYFIND_H
#include <iostream>
template <typename T>
int easyfind(T &container, int value) {
        typename T::iterator it;
        for (it = container.begin(); it != container.end(); it++) {
            if (*it == value)
                return *it;
        }
        throw std::exception();
    }
#endif //CPP_EASYFIND_H
