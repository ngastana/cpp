#include "ClapTrap.hpp"

int main( void ) 
{
    ClapTrap persona("Eneko");
    ClapTrap persona1("Madona");
    
    persona.attack("Robot1");
    persona.beRepaired(2);
    persona.attack(persona1.getName());
    persona1.takeDamage(persona.getAttackDamage());
    persona1.beRepaired(2);
    
    return 0;
}