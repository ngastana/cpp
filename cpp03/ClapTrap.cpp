/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:20:51 by ngastana          #+#    #+#             */
/*   Updated: 2025/03/05 18:38:59 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    _name = "Nerea";
}

ClapTrap::ClapTrap(std::string name){   
    _name = name;
}

ClapTrap::~ClapTrap() {
}

void ClapTrap::attack(const std::string& target)
{
    if (energy_points > 0)
    {
        energy_points--;
        std::cout << "ClapTrap " << this->_name << " attack "<< target << ", causing " << this->attack_damage << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->_name << " no tiene puntos" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hit_points > 0)
    {
        hit_points=-amount;
        std::cout << "ClapTrap " << this->_name << " take damage of "<< amount << std::endl;
    }
    std::cout << "ClapTrap " << this->_name << " hasn't got life" << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energy_points > 0)
    {
        energy_points--;
        hit_points++;
        std::cout << "ClapTrap " << this->_name << "repairs itself the amount of "<< amount << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->_name << " no tiene puntos" << std::endl;
}
