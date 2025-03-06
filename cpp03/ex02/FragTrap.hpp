#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <cmath>

class FragTrap : public ClapTrap
{
	public:
		FragTrap (void);
		FragTrap (std::string name);
		~FragTrap (void);

        void highFivesGuys(void);
};

#endif