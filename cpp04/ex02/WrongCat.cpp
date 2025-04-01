/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 13:09:59 by ngastana          #+#    #+#             */
/*   Updated: 2025/04/01 15:46:16 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat:: WrongCat (void) : WrongAnimal("WrongCat")
{
    std::cout << GREEN "WrongCat was created" << std::endl;
}

WrongCat :: WrongCat (const WrongCat &copy)
{
    std::cout << GREEN << "WrongCat copy constructor called" << RESET << std::endl;
    *this = copy;
}

WrongCat::~WrongCat (void)
{
    std::cout << RED "WrongCat was destroyed" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
    std::cout << CYAN "WrongCat Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->_type = other._type;
    }
    return *this;
}

void	WrongCat::makeSound(void) const
{
    std::cout << RESET "GRONFFF grunfff!!" << std::endl;
}
