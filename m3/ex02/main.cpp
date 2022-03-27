//
// Created by Abdelouahad Ait hamd on 3/24/22.
//

#include "FragTrap.h"
int main()
{
    FragTrap a;
    FragTrap b("b_0n3");
    FragTrap c(b);
    FragTrap *n = new FragTrap("b1");
    a = c;
    a.attack("1");
    b.attack("2");
    c.attack("3");

    b.attack("B_0n3");
    n->attack("hell");
    a.highFivesGuys();
    b.highFivesGuys();
    c.highFivesGuys();
    n->highFivesGuys();
    delete n;


}