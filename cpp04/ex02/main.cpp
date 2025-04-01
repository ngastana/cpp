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
    AAnimal* animal1 = new Cat();
    AAnimal* animal2 = new Dog();

    animal1->makeSound();  // Muestra "Meow!"
    animal2->makeSound();  // Muestra "Woof!"

    delete animal1;
    delete animal2;

    return 0;
}
