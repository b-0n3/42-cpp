//
// Created by Abdelouahad Ait hamd on 3/24/22.
//

#include "ClapTrap.h"
int main()
{
    ClapTrap a;
     ClapTrap b("b_0n3");
    ClapTrap c(b);
    ClapTrap *n = new ClapTrap("b1");
    a = c;
    a.attack("1");
    b.attack("2");
    c.attack("3");
    a.takeDamage(1);
    b.takeDamage(10);
    c.takeDamage(3);
    a.beRepaired(20);
    b.attack("B_0n3");
    n->attack("hell");
    n->beRepaired(1);
    n->takeDamage(24);
    delete n;


}