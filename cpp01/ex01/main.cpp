/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 16:37:17 by ngastana          #+#    #+#             */
/*   Updated: 2025/02/17 20:00:31 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("Unnamed") {}

Zombie::Zombie(std::string name) : _name(name) {
	if (_name.empty())
		_name = "Foo";
}

Zombie::~Zombie() {
	std::cout << "⚰ Zombie " << _name << " died..." << std::endl;
}

int main()
{
	int numZombies = 3;
	Zombie * hordeZombie = zombieHorde(numZombies, "Nerea");
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
