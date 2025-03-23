#include "Fixed.hpp"

Fixed::Fixed() : _number(0) {
}

Fixed::~Fixed() {
}

Fixed::Fixed(const Fixed &copy) 
{
	*this = copy;
}

Fixed::Fixed(const int int_num) 
{
	_number = int_num << _nb_fract_bits;
/* 	00000002  (int_num en binario)
	  Desplazamos 8 posiciones a la izquierda
	200000000  2 * 2^8 = 512
	(512 en binario) */
}

Fixed::Fixed(const float float_num) 
{
	_number = roundf(float_num * (1 << _nb_fract_bits)); //_number = round(5.05*256) = 1293
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) 
{
	out << fixed.toFloat();
	return out;
}

Fixed &Fixed::operator=(const Fixed &other) {
	if (this != &other)
		this->_number = other._number;
	return *this;
}

bool Fixed::operator>(const Fixed &fixed) const
{
    return (this->_number > fixed._number); 
}

bool Fixed::operator<(const Fixed &fixed) const
{
	return (this->_number < fixed._number);
}

bool Fixed::operator>=(const Fixed &fixed) const
{
	return (this->_number >= fixed._number);
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	return (this->_number <= fixed._number);
}

bool Fixed::operator==(const Fixed &fixed) const
{
	return (this->_number == fixed._number);
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	return (this->_number != fixed._number);
}

Fixed Fixed::operator+(const Fixed &fixed) const 
{
    Fixed result;
    result._number = this->_number + fixed._number;
    return result;
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
    Fixed result;
    result._number = this->_number - fixed._number;
    return result;
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
    Fixed result;
    result._number = (static_cast<long long>(this->_number) * static_cast<long long>(fixed._number)) >> _nb_fract_bits; //662016 >> 8 = 662016 / 256 = 2586
	return result;	
}


Fixed Fixed::operator/(const Fixed &fixed) const
{
	Fixed result;
	result._number= (this->_number << _nb_fract_bits) / fixed._number;
	return (result);
}

Fixed &Fixed::operator++(void)
{
	this->_number++;
	return *this;
}

Fixed Fixed::operator++(int num)
{
	Fixed fixed(*this);
	this->_number++;
	return fixed;
}

Fixed &Fixed::operator--()
{
	this->_number--;
	return *this;
}

Fixed Fixed::operator--(int num)
{
	Fixed fixed(*this);
	this->_number--;
	return fixed;
}

float Fixed::toFloat(void) const 
{
	return ((float)_number / (1 << _nb_fract_bits));
/* 	00000001  (1 en binario)
	  Desplazamos 8 posiciones a la izquierda
	100000000  1 << 8 = 2^8 = 256
	(256 en binario) */
}

int Fixed::toInt(void) const 
{
	return this->_number >> _nb_fract_bits;
}

Fixed& Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	return ((fixed1<fixed2) ? fixed1:fixed2);
}

const Fixed& Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
	return ((fixed1<fixed2) ? fixed1:fixed2);
}

Fixed& Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	return ((fixed1>fixed2) ? fixed1:fixed2);
}

const Fixed& Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
	return ((fixed1>fixed2) ? fixed1:fixed2);
}