/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:45:32 by ngastana          #+#    #+#             */
/*   Updated: 2025/02/24 16:51:49 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Fixed.hpp"

Fixed::Fixed() : _number(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) {
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed &Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) { // Evitar autoasignación
        this->_number = other._number;
    }
    return *this;
}

Fixed::Fixed(const int int_num) {
    std::cout << "Int constructor called" << std::endl;
    this->_number = int_num << _nb_fract_bits; // Conversión a punto fijo
}

Fixed::Fixed(const float float_num) {
    std::cout << "Float constructor called" << std::endl;
    this->_number = roundf(float_num * (1 << _nb_fract_bits)); // Conversión correcta
}

float Fixed::toFloat(void) const {
    return static_cast<float>(this->_number) / (1 << _nb_fract_bits);
}

int Fixed::toInt(void) const {
    return this->_number >> _nb_fract_bits;
}

// Sobrecarga del operador << para impresión
std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
}
