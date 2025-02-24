
#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed ();
		Fixed(const Fixed &copy);
		Fixed (const int int_num); //It converts it to the corresponding fixed-point value.
		Fixed (const float float_num); //It converts it to the corresponding fixed-point value. 
		~Fixed ();

		float toFloat( void ) const; //converts the fixed-point value to a floating-point value
		int toInt( void ) const; //converts the fixed-point value to an integer value.
		
		static Fixed& min(Fixed &fixed1, Fixed &fixed2);
		static const Fixed& min(const Fixed &fixed1, const Fixed &fixed2);
		static Fixed& max(Fixed &fixed1, Fixed &fixed2);
		static const Fixed& max(const Fixed &fixed1, const Fixed &fixed2);

		Fixed&	operator=(const Fixed &other);
		bool	operator>(const Fixed &fixed) const;
		bool	operator<(const Fixed &fixed) const;
		bool	operator>=(const Fixed &fixed) const;
		bool	operator<=(const Fixed &fixed) const;
		bool	operator==(const Fixed &fixed) const;
		bool	operator!=(const Fixed &fixed) const;
		Fixed	operator+(const Fixed &fixed) const;
		Fixed	operator-(const Fixed &fixed) const;
		Fixed	operator*(const Fixed &fixed) const;
		Fixed	operator/(const Fixed &fixed) const;

		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--(void);
		Fixed	operator--(int);

	private:
		int _number;
		static const int _nb_fract_bits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif