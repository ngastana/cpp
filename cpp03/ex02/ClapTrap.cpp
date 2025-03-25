/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:20:51 by ngastana          #+#    #+#             */
/*   Updated: 2025/03/25 21:44:49 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("Nerea"), _hit_points(100), _energy_points(50), _attack_damage(20){

std::cout << GREEN << "ClapTrap " << this->getName() << " has been created!" << std::endl;

}

ClapTrap::ClapTrap(std::string name): _name(name), _hit_points(100), _energy_points(50), _attack_damage(20){

std::cout << GREEN << "ClapTrap " << this->getName() << " has been created" << std::endl;

}

ClapTrap::~ClapTrap() {

std::cout << RED << "ClapTrap " << this->getName() << " has been destroyed" << std::endl;

}

void ClapTrap::attack(const std::string& target)
{
    if (_energy_points > 0 && _hit_points > 0)
    {
        _energy_points -= 1;
        std::cout << YELLOW << "ClapTrap " << this->getName() << " attack "<< target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
    }
    else
        std::cout << WHITE << "ClapTrap " << this->getName() << " can't attack, not enough energy or hit points!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hit_points > 0)
    {
        _hit_points-=amount;
        std::cout << MAGENTA << "ClapTrap " << getName() << " takes " << amount
                  << " points of damage! ";
        if (_hit_points > 0)
            std::cout << "Remaining HP: " << _hit_points << std::endl;
        else
            std::cout << RED << getName() << " no hit points left (death) :(" << std::endl;
    }
    else if (_hit_points <= 0)
        std::cout << CYAN << "ClapTrap " << this->getName() << " is not working" << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energy_points > 0 && _hit_points > 0)
    {
        _energy_points -= 1;
        _hit_points += amount;
        std::cout << BLUE << "ClapTrap " << getName() << " repairs itself for " << amount << " points! Remaining HP: " << _hit_points << std::endl;
    }
    else
        std::cout << CYAN << "ClapTrap " << this->getName() << " can't repair, not enough energy or hit points!" << std::endl;
}