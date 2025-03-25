#include "ClapTrap.hpp"

int main() {
    ClapTrap robot1("RoboWarrior");
    ClapTrap robot2("MechaDestroyer");
    
    robot1.attack("MechaDestroyer");
    robot2.takeDamage(2); 
    robot1.beRepaired(4);
    
    for (int i = 0; i < 5; i++) {
        robot1.attack("MechaDestroyer");
        robot2.takeDamage(2);
    }
    
    robot2.beRepaired(3);
    robot1.attack("MechaDestroyer");
    robot2.takeDamage(2);

    robot1.takeDamage(10);
    robot1.takeDamage(5);
    robot1.takeDamage(1);
    return 0;
}
