

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(void): ClapTrap(){
std::cout << "FragTrap " << this->_name << " has been created" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap (name){

std::cout << "FragTrap " << this->_name << " has been created" << std::endl;

}

FragTrap::~FragTrap() {

std::cout << "FragTrap " << this->_name << " has been destroyed" << std::endl;

}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_name << " has high fived" << std::endl;
}