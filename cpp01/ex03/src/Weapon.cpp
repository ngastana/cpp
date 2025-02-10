/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 19:38:03 by ngastana          #+#    #+#             */
/*   Updated: 2025/02/10 19:32:59 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"

Weapon::Weapon (std::string type) : _type(type) {}

Weapon::~Weapon() {
	std::cout << _type << " has been destroyed " << std::endl;
}

const std::string& Weapon::getType()
{
	return _type;
}

void Weapon::setType(const std::string& type)
{
	_type = type;
}
