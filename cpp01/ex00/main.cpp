/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:46:05 by ngastana          #+#    #+#             */
/*   Updated: 2025/02/03 20:22:23 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {
	if (_name.empty())
		_name = "Foo";
}
Zombie::~Zombie() {
	std::cout << "Zombie " << _name << " destroyed :P" << std::endl;
}

int main()
{
	Zombie creatZombie("");
	creatZombie.announce();
	Zombie* heapZombie = newZombie("");	
	heapZombie->announce();
	delete heapZombie;
	randomChump("RandomChump");
	
	return 0;
}
