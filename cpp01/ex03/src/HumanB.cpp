/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 19:39:53 by ngastana          #+#    #+#             */
/*   Updated: 2025/02/18 17:59:55 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanB.hpp"

HumanB::HumanB(std::string name) : _refWeapon(NULL), _name(name)
{
	std::cout << _name << " does not have any weapon " << std::endl;
}
HumanB::~HumanB(){
	std::cout << _name << " has been destroyed ⚰" << std::endl;
}

void HumanB::setWeapon(Weapon& _refWeaponA)
{
	_refWeapon = &_refWeaponA;
}

void HumanB::attack(void)
{
	if (_refWeapon)
		std::cout << _name << " attacks with their " << _refWeapon->getType() << std::endl;
	else
		std::cout << _name << " has no weapon to attack with!" << std::endl;
}