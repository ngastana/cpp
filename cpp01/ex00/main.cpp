/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:46:05 by ngastana          #+#    #+#             */
/*   Updated: 2025/02/18 18:35:32 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie creatZombie("");
	creatZombie.announce();
	Zombie* heapZombie = newZombie("New");
	heapZombie->announce();
	delete heapZombie;
	randomChump("random");
	
	return 0;
}
