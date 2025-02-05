/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 19:39:53 by ngastana          #+#    #+#             */
/*   Updated: 2025/02/05 18:43:22 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanB.hpp"

HumanB::HumanB (Weapon& _refWeapon) {}

HumanB::~HumanB(){}

void HumanB::setWeapon(Weapon& _refWeaponA)
{
    _refWeapon = &_refWeaponA;
}

void HumanB::attack(void)
{   
    if (&_refWeapon)
    	std::cout << _name << " attacks with their " << &_refWeapon << std::endl;
}