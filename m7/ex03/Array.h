//
// Created by Abdelouahad Ait hamd on 3/31/22.
//

#pragma once
#include <iostream>

template<typename T> class Array {
private:
    T *_array;
    unsigned int _size;
public:
    Array(unsigned int size){
        _size = size;
        _array = new T[size];
    }
    Array(){
        _array = new T[0];
        _size = 1;
    }
    ~Array(){
        delete[] _array;

    }
    T &operator[](int index) throw(std::exception){
        if (index < 0 || index >= (int) _size)
            throw std::exception();
        return _array[index];
    }
    int size(){
        return _size;
    }
};
