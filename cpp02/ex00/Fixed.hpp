#ifdef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class fixed_number
{
    public:
        Fixed (void);
        Fixed(const Fixed& copy);
        Fixed& operator=(const Fixed& other);  
        ~Fixed (void);

        int getRawBits(void);
        void setRawBits(int const raw);

    private:
        int _number;
        static const int _nb_fract_bits = 8;
}

#endif 