
#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

class Fixed
{
    public:
        Fixed (void);
        Fixed (const Fixed &copy);
        Fixed (const int int_num); //It converts it to the corresponding fixed-point value.
        Fixed (const float float_num); //It converts it to the corresponding fixed-point value. 
        Fixed &operator=(const Fixed &other);
        ~Fixed ();

        
        float toFloat( void ) const; //converts the fixed-point value to a floating-point value
        int toInt( void ) const; //converts the fixed-point value to an integer value.

    private:
        int _number;
        static const int _nb_fract_bits = 8;
};


std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
