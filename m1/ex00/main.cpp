#include "Zombie.hpp"
#include <string>
#include <iostream>
#include <iomanip>


int main()
{
	Zombie *heap_zombie;
	heap_zombie = newZombie("kobain");
	heap_zombie->announce();
	delete heap_zombie;
	randomChump("Kurt");
	return 0 ;
}
