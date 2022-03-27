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
    b.attack("2");
    c.attack("3");

    b.attack("B_0n3");
    n->attack("hell");
    a.guardGate();
    b.guardGate();
    c.guardGate();
    n->guardGate();
    delete n;


}