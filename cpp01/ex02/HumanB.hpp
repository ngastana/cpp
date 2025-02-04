#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>

class Zombie 
{
	public:
		HumanB();
		HumanB(std::string name);
		~HumanB();


	private:
		std::string _name;
};


#endif