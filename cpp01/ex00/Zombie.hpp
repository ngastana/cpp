#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:
		Zombie();
		~Zombie();

	private:
		std::string name;

};
	void randomChumo (std::string name);
	Zombie* newZombie(std::string name);


#endif
