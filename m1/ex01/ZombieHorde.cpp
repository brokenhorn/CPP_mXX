#include <string>
#include <iostream>
#include <iomanip>
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int i;
	Zombie* horde = new Zombie[N];

	i = 0;
	while(i < N)
	{
		horde[i].give_name(name);
		i++;
	}
	return (horde);
}