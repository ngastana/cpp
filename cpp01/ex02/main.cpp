/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 19:23:04 by ngastana          #+#    #+#             */
/*   Updated: 2025/02/04 19:23:59 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("Unnamed") {}

Zombie::Zombie(std::string name) : _name(name) {
	if (_name.empty())
		_name = "Foo";
}

Zombie::~Zombie() {
	std::cout << "Zombie " << _name << " destroyed :P" << std::endl;
}

int main()
{

	return 0;
}
