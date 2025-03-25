#include "ScavTrap.hpp"

int main()
{
	ClapTrap	josebas("Josebas");
	ClapTrap	kalletano("Kalletano");
	//ClapTrap	txutxi;
	ScavTrap	manolito("Manu");

	manolito.attack("Kalletano");
	kalletano.takeDamage(20);
	josebas.attack("Kalletano");
	kalletano.takeDamage(20);
	josebas.attack("Kalletano");
	manolito.guardGate();
	kalletano.takeDamage(20);
	josebas.beRepaired(20);
	josebas.attack("Kalletano");
	kalletano.takeDamage(20);
	josebas.attack("Kalletano");
	kalletano.takeDamage(20);
	josebas.attack("Kalletano");
	kalletano.takeDamage(20);
	josebas.attack("Kalletano");
	kalletano.takeDamage(20);
	josebas.attack("Kalletano");
	kalletano.takeDamage(20);
	josebas.attack("Kalletano");
	kalletano.takeDamage(20);
	josebas.attack("Kalletano");
	kalletano.takeDamage(20);
	josebas.attack("Kalletano");
	kalletano.takeDamage(20);
	josebas.attack("Kalletano");
	kalletano.takeDamage(20);
	josebas.attack("Kalletano");
	kalletano.takeDamage(20);

	return (0);
}



/* int main( void ) 
{
    ClapTrap persona("Eneko");
    ScavTrap persona1("Madona");
    
    persona.attack("Madona");
    persona1.takeDamage(89);
    persona1.beRepaired(89);
    persona.beRepaired(2);
    persona.attack(persona1.getName());
    persona1.takeDamage(persona.getAttackDamage());
    
    return 0;
} */