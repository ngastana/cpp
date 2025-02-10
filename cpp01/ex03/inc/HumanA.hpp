#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA 
{
	public:
		HumanA (std::string name, Weapon& weapon);
		~HumanA ();

		void attack(void);

	private:
		Weapon& _refWeapon; //referencia = evitamos generar una copia. Eficiencia en la Memoria y el Rendimiento
		std::string _name;
};

#endif
