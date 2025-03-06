#ifndef SCAVTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include <cmath>

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap (void);
		ScavTrap (std::string name);
		~ScavTrap (void);

		void guardGate(void);
};

#endif