//
// Created by Abdelouahad Ait hamd on 3/24/22.
//

#include "ScavTrap.h"
int main()
{
    ScavTrap a;
    ScavTrap b("b_0n3");
    ScavTrap c(b);
    ScavTrap *n = new ScavTrap("b1");
    a = c;
    a.attack("1");
    a.guardGate();

    b.attack("2");
    b.guardGate();
    c.attack("3");
    c.guardGate();
    b.attack("B_0n3");
    n->attack("hell");
    n->guardGate();

    delete n;


}