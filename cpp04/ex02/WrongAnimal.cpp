/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 13:09:56 by ngastana          #+#    #+#             */
/*   Updated: 2025/04/02 13:05:35 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal:: WrongAnimal (void): _type("Undefined wrong type")
{
    std::cout << GREEN "WrongAnimal was created" << std::endl;
}

WrongAnimal:: WrongAnimal (std::string type) : _type(type)
{
    std::cout << GREEN "WrongAnimal constructor called with type:" << this->_type << std::endl;  
}

WrongAnimal :: WrongAnimal (const WrongAnimal &copy) {
    std::cout << GREEN << "WrongAnimal copy constructor called" << RESET << std::endl;
    *this = copy;
}

WrongAnimal::~WrongAnimal (void)
{
    std::cout << RED "WrongAnimal was destroyed" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
    std::cout << CYAN "WrongAnimal Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->_type = other._type;
    }
    return *this;
}

void	WrongAnimal::makeSound(void) const
{
    std::cout << "GRUUU GRUUU!!" << std::endl;
}
