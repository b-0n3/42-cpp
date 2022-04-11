//
// Created by Abdelouahad Ait hamd on 3/31/22.
//
#include <iostream>
typedef struct {
    int n;
} Data;

uintptr_t serialize(Data *data) {
    return reinterpret_cast<uintptr_t>(data);
}
Data *deserialize(uintptr_t data) {
    return reinterpret_cast<Data *>(data);
}
int main(){
    Data *ptr;
    Data *ptr1;

    ptr = new Data;

    ptr->n = 10;
    std::cout << ptr->n << std::endl;
    std::cout << ptr << std::endl;

    uintptr_t ui;
    ui = serialize(ptr);
    ptr1 = deserialize(ui);

    std::cout << ptr1->n << std::endl;
    std::cout << ptr1 << std::endl;
    delete ptr;
    return 0;
}