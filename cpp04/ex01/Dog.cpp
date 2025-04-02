/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 11:46:15 by ngastana          #+#    #+#             */
/*   Updated: 2025/04/02 16:49:08 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
    std::cout << GREEN "Dog was created" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const Dog& copy)
{
    std::cout << GREEN << "Dog copy constructor called" << RESET << std::endl;
    this->_brain = new Brain(*copy._brain);  
}

Dog::~Dog(void)
{
    std::cout << RED "Dog was destroyed" << std::endl;
    delete this->_brain;
}

Dog &Dog::operator=(const Dog& other)
{
    std::cout << CYAN "Dog Copy assignment operator called" << std::endl;
    if (this != &other) 
    {
        Animal::operator=(other);
        
        delete this->_brain;
        
        if (other._brain) 
        {
            this->_brain = new Brain(*other._brain);
        } 
        else 
        {
            this->_brain = nullptr;
        }
    }
    return *this;
}

void Dog::makeSound(void) const
{
    std::cout << RESET "WOOOFFFF WOOOFFF!!" << std::endl;
}

std::string	Dog::getIdea(int i) const
{
	return this->_brain->getIdea(i);
}

void		Dog::setIdea(int i, std::string const & idea)
{
	this->_brain->setIdea(i, idea);
}