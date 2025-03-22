/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:45:32 by ngastana          #+#    #+#             */
/*   Updated: 2025/03/22 10:03:04 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _number(0) {
	std::cout << GREEN << "Default constructor called " << RESET << std::endl;
	
}

Fixed::~Fixed(){
	std::cout << RED << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << YELLOW << "Copy constructor called" << RESET << std::endl;
	*this = copy;
/* 	std::cout << &copy << std::endl;
	std::cout << this << std::endl; */	
}

Fixed &Fixed::operator = (const Fixed &other)
{
	std::cout << "Copy assignment operator called" <<  std::endl;
	this->_number = other.getRawBits();
	return(*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << BLUE << "getRawBits member function called" << RESET << std::endl;
	return (this->_number);
}

void Fixed::setRawBits (int const raw)
{
	this->_number = raw;
}