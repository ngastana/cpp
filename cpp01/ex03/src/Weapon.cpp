/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 19:38:03 by ngastana          #+#    #+#             */
/*   Updated: 2025/02/18 17:56:43 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"

Weapon::Weapon (std::string weapon) : _type(weapon) {}

Weapon::~Weapon() 
{
}

const std::string& Weapon::getType()
{
	return _type;
}

void Weapon::setType(const std::string& type)
{
	_type = type;
}
