//
// Created by Abdelouahad Ait hamd on 3/24/22.
//

#include "DiamondTrap.h"
int main()
{
    DiamondTrap *n = new DiamondTrap("b0n3");

    DiamondTrap a;
    DiamondTrap b("sdf");
    DiamondTrap c(b);
    a = c;
    n->attack("ss");
    a.attack("sdfdsf");
    b.attack("dsf");
    c.attack("sdfsdf");
    n->whoAmI();
    a.whoAmI();
    b.whoAmI();
    c.whoAmI();
    delete n;
}