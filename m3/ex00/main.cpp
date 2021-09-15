#include "ClapTrap.hpp"

int main()
{
	ClapTrap trap("Bobby");

	trap.attack("Teddy");
	trap.takeDamage(2);
	trap.beRepaired(2);

}