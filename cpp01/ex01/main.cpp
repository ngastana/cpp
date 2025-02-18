/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 16:37:17 by ngastana          #+#    #+#             */
/*   Updated: 2025/02/18 17:45:43 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int numZombies = 2;
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
