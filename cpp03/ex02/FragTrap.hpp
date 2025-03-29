#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <cmath>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap (void);
		FragTrap (std::string name);
		FragTrap (const FragTrap &copy);
		~FragTrap (void);

		FragTrap& operator = (const FragTrap& other);

        void highFivesGuys(void);
};

#endif