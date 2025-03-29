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
	protected:
		std::string 	_name;
		int		_hit_points;
		int		_energy_points;
		int		_attack_damage;

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
		void setHitPoints(int _new_hit_points){_hit_points = _new_hit_points;};
		void setEnergyPoints(int _new_energy_points){_new_energy_points = _energy_points;};
		void setAttackDamage(int _new_attack_damage){_attack_damage = _new_attack_damage;};
		void increaseHitPoints(unsigned int amount){_hit_points = _hit_points + amount;};
		void decreaseHitPoints(unsigned int amount){_hit_points = _hit_points - amount;};
		void decreaseEnergyPoints(unsigned int amount){_energy_points = _energy_points - amount;};
};

#endif