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

Cat::Cat(void) : AAnimal("Cat")
{
    std::cout << GREEN "Cat was created" << std::endl;
    this->_brain = new Brain();
}

Cat::Cat(const Cat& copy)
{
    std::cout << GREEN << "Cat copy constructor called" << RESET << std::endl;
    *this = copy;  
}

Cat::~Cat(void)
{
    std::cout << RED "Cat was destroyed" << std::endl;
    delete this->_brain;
}

Cat &Cat::operator=(const Cat& other)
{
    std::cout << CYAN "Cat Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->_type = other._type;
    }
    this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea(i, other._brain->getIdea(i));
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