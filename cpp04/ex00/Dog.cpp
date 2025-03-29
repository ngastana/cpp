/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 11:46:15 by ngastana          #+#    #+#             */
/*   Updated: 2025/03/29 12:10:55 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
    std::cout << GREEN "Dog was created" << std::endl;
}

Dog::Dog(const Dog& copy)
{
    std::cout << GREEN << "Dog copy constructor called" << RESET << std::endl;
    *this = copy;  
}

Dog::~Dog(void)
{
    std::cout << RED "Dog was destroyed" << std::endl;
}

Dog &Dog::operator=(const Dog& other)
{
    std::cout << CYAN "Dog Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->_type = other._type;
    }
    return *this;
}

void Dog::makeSound(void) const
{
    std::cout << RESET "BARK BARK!!" << std::endl;
}

