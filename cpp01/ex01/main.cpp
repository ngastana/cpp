/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 16:37:17 by ngastana          #+#    #+#             */
/*   Updated: 2025/02/04 19:04:51 by ngastana         ###   ########.fr       */
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
	int numZombies = 5;
	Zombie * hordeZombie = zombieHorde(numZombies, "Holi");
	if (hordeZombie)
	{
		for (int i = 0; i<numZombies; i++)
		{
			hordeZombie[i].announce();
		}
		delete[] hordeZombie;
	}
	return 0;
}
