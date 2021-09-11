#include "Zombie.hpp"
#include <string>
#include <iostream>
#include <iomanip>

int main()
{
	Zombie* horde;
	int i;

	i = 0;
	horde = zombieHorde(10, "Kurt Kobain");

	while (i < 10)
	{
		horde[i].announce();
		i++;
	}
	delete [] horde;
	return 1;
}
