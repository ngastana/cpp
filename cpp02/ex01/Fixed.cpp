/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:45:32 by ngastana          #+#    #+#             */
/*   Updated: 2025/03/23 13:35:44 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Fixed.hpp"

Fixed::Fixed() : _number(0) {
    std::cout << GREEN << "Default constructor called" << RESET << std::endl;
}

Fixed::~Fixed() {
    std::cout << RED << "Destructor called" << RESET << std::endl;
}

Fixed::Fixed(const Fixed &copy) {
    std::cout << GREEN << "Copy constructor called" << RESET << std::endl;
    *this = copy;
}

Fixed &Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->_number = other._number;
    }
    return *this;
}

Fixed::Fixed(const int int_num) {
    std::cout << GREEN << "Int constructor called" << RESET << std::endl;
    this->_number = int_num << _nb_fract_bits;
}

Fixed::Fixed(const float float_num) {
    std::cout << GREEN << "Float constructor called" << RESET << std::endl;
    this->_number = roundf(float_num * (1 << _nb_fract_bits));
}

float Fixed::toFloat(void) const {
    return static_cast<float>(this->_number) / (1 << _nb_fract_bits);
}

int Fixed::toInt(void) const 
{
    return this->_number >> _nb_fract_bits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) 
{
    out << fixed.toFloat();
    return out;
}