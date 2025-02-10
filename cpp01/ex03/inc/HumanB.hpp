#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include "HumanA.hpp"

class HumanB 
{
	public:
		HumanB (std::string name);
		~HumanB ();

		void attack(void);
		void setWeapon(Weapon& _refWeaponA);

	private:
		Weapon* _refWeapon;
		std::string _name;
};

#endif
