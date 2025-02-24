/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:45:32 by ngastana          #+#    #+#             */
/*   Updated: 2025/02/24 19:33:19 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _number(0) {
}

Fixed::~Fixed() {
}

Fixed::Fixed(const Fixed &copy) {
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) { // Evitar autoasignación
		this->_number = other._number;
	}
	return *this;
}

bool Fixed::operator>(const Fixed &fixed) const
{
	std::cout << ">" << std::endl;
	if (this > &fixed) { // Evitar autoasignación
		return true;
	}
	return false;
}

bool Fixed::operator<(const Fixed &fixed) const
{
	std::cout << "<" << std::endl;
	if (this < &fixed) { // Evitar autoasignación
		return true;
	}
	return false;
}

bool Fixed::operator>=(const Fixed &fixed) const
{
	std::cout << ">=" << std::endl;
	if (this >= &fixed) { // Evitar autoasignación
		return true;
	}
	return false;
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	std::cout << "<=" << std::endl;
	if (this <= &fixed) { // Evitar autoasignación
		return true;
	}
	return false;
}

bool Fixed::operator==(const Fixed &fixed) const
{
	std::cout << "==" << std::endl;
	if (this == &fixed) { // Evitar autoasignación
		return true;
	}
	return false;
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	std::cout << "!=" << std::endl;
	if (this != &fixed) { // Evitar autoasignación
		return true;
	}
	return false;
}

Fixed Fixed::operator+(const Fixed &fixed) const
{
	std::cout << "+" << std::endl;
	Fixed answer;
	answer = this->_number + fixed._number;
	return answer;	
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
	std::cout << "-" << std::endl;
	Fixed answer;
	answer = this->_number - fixed._number;
	return answer;	
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
	std::cout << "*" << std::endl;
	Fixed answer;
	answer = this->_number * fixed._number;
	return answer;	
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
	std::cout << "/" << std::endl;
	Fixed answer;
	answer = this->_number / fixed._number;
	return answer;	
}

Fixed &Fixed::operator++()
{
	std::cout << "++" << std::endl;
	this->_number++;
	return *this;
}

Fixed Fixed::operator++(int num)
{
	std::cout << "++" << std::endl;
	num++;
	return num;	
}

Fixed &Fixed::operator--()
{
	std::cout << "--" << std::endl;
	this->_number--;
	return *this;
}

Fixed Fixed::operator--(int num)
{
	std::cout << "--" << std::endl;
	num--;
	return num;	
}

Fixed::Fixed(const int int_num) 
{
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


Fixed& Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	return (fixed1<fixed2) ? fixed1:fixed2;
}


const Fixed& Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
	return (fixed1<fixed2) ? fixed1:fixed2;
}

Fixed& Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	return(fixed1<fixed2) ? fixed2:fixed1;
}

const Fixed& Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
	return (fixed1<fixed2) ? fixed2:fixed1;
}