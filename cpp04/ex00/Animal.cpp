/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 11:55:20 by ngastana          #+#    #+#             */
/*   Updated: 2025/03/29 13:15:42 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal:: Animal (void) : _type("Unknown")
{
    std::cout << GREEN "Animal was created" << std::endl;
}

Animal:: Animal (std::string type) : _type(type)
{
    std::cout << GREEN "Animal was created" << std::endl;  
}

Animal :: Animal (const Animal& copy)
{
    std::cout << GREEN << "Animal copy constructor called" << RESET << std::endl;
    *this = copy;
}

Animal::~Animal (void)
{
    std::cout << RED "Animal was destroyed" << std::endl;
}

Animal &Animal::operator=(const Animal &other) {
    std::cout << CYAN "Animal Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->_type = other._type;
    }
    return *this;
}

std::string	Animal::getType() const
{
    return this->_type;
}

void Animal::makeSound(void) const
{
    std::cout << RESET "! !" << std::endl;
}
