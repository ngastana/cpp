
#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    public:
        Fixed ();
        Fixed(Fixed &copy); //le podemos poner const dentro
        Fixed &operator = (Fixed &other); //le podemos poner const dentro  
        ~Fixed ();

        int getRawBits(void) const;
        void setRawBits(int const raw);

    private:
        int _number;
        static const int _nb_fract_bits = 8;
};

#endif