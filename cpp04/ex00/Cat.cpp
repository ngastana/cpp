/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 11:46:30 by ngastana          #+#    #+#             */
/*   Updated: 2025/04/02 13:45:59 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
    std::cout << GREEN "Cat was created" << std::endl;
}

Cat::Cat(const Cat& copy)
{
    std::cout << GREEN << "Cat copy constructor called" << RESET << std::endl;
    *this = copy;  
}

Cat::~Cat(void)
{
    std::cout << RED "Cat was destroyed" << std::endl;
}

Cat &Cat::operator=(const Cat& other)
{
    std::cout << CYAN "Cat Copy assignment operator called" << std::endl;
    if (this != &other) {
        Animal::operator=(other);
    }
    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << RESET "Miau Miauuuuuu!!" << std::endl;
}
