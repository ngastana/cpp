#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

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

class ClapTrap
{
	public:
		ClapTrap (void);
		ClapTrap (std::string name);
		ClapTrap (const ClapTrap &copy);
		~ClapTrap (void);

		ClapTrap& operator = (const ClapTrap& other);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getName(void) {return _name;};
		int getHitPoints(void) {return _hit_points;};
		int getEnergyPoints(void) {return _energy_points;};
		int getAttackDamage(void) {return _attack_damage;};
	
	private:
		std::string 	_name;
		int		_hit_points;
		int		_energy_points;
		int		_attack_damage;

};

#endif