//
// Created by Abdelouahad Ait hamd on 3/24/22.
//

#include "ScavTrap.h"
#include "FragTrap.h"
int main()
{
    PRINT("ScavTrap test")
    PRINTLN()
    ScavTrap a;
    ScavTrap b("b_0n3");
    ScavTrap c(b);
    ScavTrap *n = new ScavTrap("b1");
    a = c;
    FragTrap fa;
    FragTrap fb("b_0n3");
    FragTrap fc(fb);
    FragTrap *fn = new FragTrap("b1");
    fa = fc;
    a.attack("1");
    a.guardGate();

    b.attack("2");
    b.guardGate();
    c.attack("3");
    c.guardGate();
    b.attack("B_0n3");
    n->attack("hell");
    n->guardGate();
    PRINT("FragTrap test")
    PRINTLN()
    fa.attack("1");
    fa.highFivesGuys();

    fb.attack("2");
    fb.highFivesGuys();
    fc.attack("3");
    fc.highFivesGuys();
    fb.attack("B_0n3");
    fn->attack("hell");
    fn->highFivesGuys();

    delete n;
    delete fn;


}