#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <cmath>

class ClapTrap
{
	public:
		ClapTrap ();
		ClapTrap (std::string name);
		~ClapTrap ();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	
	private:
		std::string 	_name;
		int		hit_points = 10;
		int		energy_points = 10;
		int		attack_damage = 0;

};

#endif