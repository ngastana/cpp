/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 11:53:26 by ngastana          #+#    #+#             */
/*   Updated: 2025/04/01 16:59:47 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	Animal* Zoo[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			Zoo[i] = new Dog();
		else
			Zoo[i] = new Cat();
	}
	
	std::cout << std::endl << "-------------" << Zoo[4]->getType() << std::endl <<std::endl;
	std::cout << Zoo[4]->getIdea(3) << std::endl;
	
	for (int i = 0; i < 10; i++)
	{
		Zoo[i]->makeSound();
		delete Zoo[i];
	}

	system("leaks animal01");
	return 0;
}