#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon 
{
	public:
		Weapon();
		~Weapon ();

		const Weapon* getType(void);
		void setType(Weapon type);

	private:
		std::string _type;
};

#endif
