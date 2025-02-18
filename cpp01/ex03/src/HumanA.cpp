/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 19:39:34 by ngastana          #+#    #+#             */
/*   Updated: 2025/02/18 17:59:49 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _refWeapon(weapon), _name(name) {

	std::cout << this->_name << " has taken a " 
				<< this->_refWeapon.getType() << std::endl;
}
HumanA::~HumanA() {
	std::cout << _name << " has been destroyed ⚰" << std::endl;
}

void HumanA::attack(void)
{
	std::cout << _name << " attacks with their " << _refWeapon.getType() << std::endl;
}
