/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:20:51 by ngastana          #+#    #+#             */
/*   Updated: 2025/03/25 21:34:26 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("Nerea"), _hit_points(10), _energy_points(10), _attack_damage(0){

std::cout << GREEN << "ClapTrap " << this->_name << " has been created!" << std::endl;

}

ClapTrap::ClapTrap(std::string name): _name(name), _hit_points(10), _energy_points(10), _attack_damage(0){

std::cout << GREEN << "ClapTrap " << this->_name << " has been created" << std::endl;

}

ClapTrap::~ClapTrap() {

std::cout << RED << "ClapTrap " << this->_name << " has been destroyed" << std::endl;

}

void ClapTrap::attack(const std::string& target)
{
    if (_energy_points > 0 && _hit_points > 0)
    {
        _energy_points -= 1;
        std::cout << YELLOW << "ClapTrap " << this->_name << " attack "<< target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
    }
    else
        std::cout << WHITE << "ClapTrap " << this->_name << " can't attack, not enough energy or hit points!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hit_points > 0)
    {
        _hit_points-=amount;
        std::cout << MAGENTA << "ClapTrap " << _name << " takes " << amount
                  << " points of damage! ";
        if (_hit_points > 0)
            std::cout << "Remaining HP: " << _hit_points << std::endl;
        else
            std::cout << RED << _name << " no hit points left :(" << std::endl;
    }
    else if (_hit_points <= 0)
        std::cout << CYAN << "ClapTrap " << this->_name << " hasn't got life" << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energy_points > 0 && _hit_points > 0)
    {
        _energy_points -= 1;
        _hit_points += amount;
        std::cout << BLUE << "ClapTrap " << _name << " repairs itself for " << amount << " points! Remaining HP: " << _hit_points << std::endl;
    }
    else
        std::cout << CYAN << "ClapTrap " << this->_name << " can't repair, not enough energy or hit points!" << std::endl;
}