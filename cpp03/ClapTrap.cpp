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

ClapTrap::ClapTrap(): _name("Nerea"){
}

ClapTrap::ClapTrap(std::string name): _name(name){
}

ClapTrap::~ClapTrap() {
}

void ClapTrap::attack(const std::string& target)
{
    _energy_points -= 1;
    if (_energy_points > 0 && _hit_points > 0)
    {
        _energy_points--;
        std::cout << "ClapTrap " << this->_name << " attack "<< target << ", causing " << this->_attack_damage << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->_name << " no tiene puntos" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    _hit_points -= amount;
    if (_hit_points > 0)
    {
        _hit_points=-amount;
        std::cout << "ClapTrap " << this->_name << " take damage of "<< amount << std::endl;
    }
    if (_hit_points <= 0)
        std::cout << "ClapTrap " << this->_name << " hasn't got life" << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energy_points > 0 && _hit_points > 0)
    {
        _energy_points--;
        _hit_points += amount;
        std::cout << "ClapTrap " << this->_name << "repairs itself the amount of "<< amount << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->_name << " no tiene puntos ni de enegia o de pelea" << std::endl;
}
