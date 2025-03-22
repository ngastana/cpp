
#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

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
        Fixed ();
        Fixed(const Fixed &copy);
        Fixed &operator = (const Fixed &other);
        ~Fixed ();

        int getRawBits(void) const;
        void setRawBits(int const raw);

    private:
        int _number;
        static const int _nb_fract_bits = 8;
};

#endif