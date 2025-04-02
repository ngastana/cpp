/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 11:53:26 by ngastana          #+#    #+#             */
/*   Updated: 2025/04/02 13:47:26 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
  
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	 

	Animal *gatoCat[10];
	for (int i = 0; i <  10; i++) {
		gatoCat[i] = new Cat();
		gatoCat[i]->makeSound();
		delete gatoCat[i];
	}
	i->makeSound();
	j->makeSound();
	const Animal* ii = new Cat();
	const Animal *a = new Cat();
	const Animal* deepCopyCat = new Cat(*static_cast<const Cat*>(a));

	const Animal *tmp = new Dog();
	const Animal *deepCopyDog = new Dog(*static_cast<const Dog*>(tmp));

	Dog dd;

	Dog aaa(dd);

	aaa.makeSound();
	Dog c;
	Dog b;

	c = b;

	b = c;

	delete tmp;
	delete deepCopyDog;
	delete a;
	delete deepCopyCat; 
	delete ii;
	delete  j;
	delete  i;
	return 0;
}