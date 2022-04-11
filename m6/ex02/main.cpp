//
// Created by Abdelouahad Ait hamd on 3/31/22.
//

#include <iostream>
#include "Base.h"
#include "A.h"
#include "B.h"
#include "C.h"
Base *generate()
{
    unsigned int  n = arc4random() % 3;
    switch (n)
    {
        case 0:
            return new A;
        case 1:
            return new B;
        case 2:
            return new C;
    }
    return nullptr;
}
void identify(Base &p)
{
    try {
        (void) dynamic_cast<A &>(p);
        std::cout << "A\n";
    }catch (std::bad_cast &e) {
        try {
            (void) dynamic_cast<B &>(p);
            std::cout << "B\n";
        }catch (std::bad_cast &e) {
            try {
                (void) dynamic_cast<C &>(p);
                std::cout << "C\n";
            }catch (std::bad_cast &e) {
                std::cout << "unknown\n";
            }
        }
    }
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A\n";
    else if (dynamic_cast<B*>(p))
        std::cout << "B\n";
    else if (dynamic_cast<C*>(p))
        std::cout << "C\n";
}

int main() {
    A a;
    B b;
    C c;


    std::cout << "ref Tests\n";

    identify(a);
    identify(b);
    identify(c);

    std::cout << "ptr Tests\n";
    identify( & a);
    identify( & b);
    identify( & c);

    std::cout << "gen Tests\n";
    identify( * generate());
    identify( generate());

}
