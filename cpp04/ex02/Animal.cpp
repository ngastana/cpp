/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 11:55:20 by ngastana          #+#    #+#             */
/*   Updated: 2025/04/01 17:12:26 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal:: AAnimal (void) : _type("Unknown")
{
    std::cout << GREEN "AAnimal was created" << std::endl;
}

AAnimal:: AAnimal (std::string type) : _type(type)
{
    std::cout << GREEN "AAnimal constructor called with type: " << this->_type << std::endl;

}

AAnimal :: AAnimal (const AAnimal& copy)
{
    std::cout << GREEN << "AAnimal copy constructor called" << RESET << std::endl;
    *this = copy;
}

AAnimal::~AAnimal (void)
{
    std::cout << RED "AAnimal was destroyed" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &other) {
    std::cout << CYAN "AAnimal Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->_type = other._type;
    }
    return *this;
}

std::string	AAnimal::getType() const
{
    return this->_type;
}

void AAnimal::makeSound(void) const
{
    std::cout << RESET "! --------- ! (undefined sound)" << std::endl;
}

std::string	AAnimal::getIdea(int i) const
{
	(void)i;
	return "Undefined idea";
}
