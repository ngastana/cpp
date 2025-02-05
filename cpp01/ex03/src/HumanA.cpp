/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 19:39:34 by ngastana          #+#    #+#             */
/*   Updated: 2025/02/05 18:27:59 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"

void HumanA::attack(void)
{
	_refWeapon = Weapon.getType();
	std::cout << _name << " attacks with their " << &_refWeapon << std::endl;
}
