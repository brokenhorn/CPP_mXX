#include <string>
#include <iostream>
#include <iomanip>
#include "Zombie.hpp"

 Zombie* newZombie( std::string name )
{
	Zombie* nz;
	nz = new Zombie(name);
	return nz;
}

