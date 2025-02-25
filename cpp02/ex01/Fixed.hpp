
#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    public:
        Fixed ();
        Fixed (const int int_num); //It converts it to the corresponding fixed-point value.
        Fixed (const float float_num); //It converts it to the corresponding fixed-point value. 
        ~Fixed ();

        float toFloat( void ) const; //converts the fixed-point value to a floating-point value
        int toInt( void ) const; //converts the fixed-point value to an integer value.

    private:
        int _number;
        static const int _nb_fract_bits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif