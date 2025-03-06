#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <cmath>

class ClapTrap
{
	public:
		ClapTrap (void);
		ClapTrap (std::string name);
		~ClapTrap (void);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getName(void) {return _name;};
		int getHitPoints(void) {return _hit_points;};
		int getEnergyPoints(void) {return _energy_points;};
		int getAttackDamage(void) {return _attack_damage;};
	
	private:
		std::string 	_name;
		int		_hit_points = 10;
		int		_energy_points = 10;
		int		_attack_damage = 0;

};

#endif