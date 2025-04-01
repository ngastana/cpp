/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 11:46:30 by ngastana          #+#    #+#             */
/*   Updated: 2025/04/01 17:14:38 by ngastana         ###   ########.fr       */
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
        this->_type = other._type;
    }
    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << RESET "Miau Miauuuuuu!!" << std::endl;
}

std::string	Cat::getIdea(int i) const
{
	return this->_brain->getIdea(i);
}

void		Cat::setIdea(int i, std::string const & idea)
{
	this->_brain->setIdea(i, idea);
}