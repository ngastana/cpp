/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:45:32 by ngastana          #+#    #+#             */
/*   Updated: 2025/02/21 20:14:43 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _number(0) {
	std::cout << "Default constructor called " << std::endl;
	
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed &copy) //le podemos poner const dentro
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
/* 	std::cout << &copy << std::endl;
	std::cout << this << std::endl; */	
}

Fixed &Fixed::operator = (Fixed &other) //le podemos poner const dentro
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_number = other._number;
	return(*this);
}

Fixed::Fixed(const int int_num)
{
	std::cout << "Int_num constructor called" << std::endl;
	this->_number = int_num;
}

Fixed::Fixed(const float float_num)
{
	std::cout << "Float_num constructor called" << std::endl;
	this->_number = float_num;
}

float Fixed::toFloat( void ) const //el const significa que la funcion no modificca el objeto
{
	std::cout << "toFloat function called" << std::endl;
	return static_cast<float>(this->_number) / (1 << _nb_fract_bits);
}

int Fixed::toInt( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return static_cast<float>(this->_number) / (1 << _nb_fract_bits);
}
