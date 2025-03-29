/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:20:51 by ngastana          #+#    #+#             */
/*   Updated: 2025/03/29 10:50:40 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
    std::cout <<  GREEN "ScavTrap " << this->getName() << " has been created" << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    std::cout << GREEN "ScavTrap " << this->getName() << " has been created" << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
    *this = copy;
    std::cout << GREEN "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << RED "ScavTrap " << this->getName() << " has been destroyed" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) 
{
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return *this;
}


void ScavTrap::guardGate(void)
{
    std::cout << WHITE "ScavTrap " << this->getName() << " has enterred in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->getEnergyPoints() > 0 && this->getHitPoints() > 0)
    {
        this->decreaseEnergyPoints(1);
        std::cout << YELLOW << "ClapTrap " << this->getName() << " attack "<< target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
    }
    else
        std::cout << WHITE << "ClapTrap " << this->getName() << " can't attack, not enough energy or hit points!" << std::endl;
}
