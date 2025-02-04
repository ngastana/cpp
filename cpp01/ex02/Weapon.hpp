#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon 
{
	public:
		Weapon();
		~Weapon ();

        std::type getType();
        void setType(std::type type);

	private:
		std::string _type;
};


#endif