#include "ScavTrap.hpp"

int main()
{
	ClapTrap trap("Bobby");

	trap.attack("Teddy");
	trap.takeDamage(2);
	trap.beRepaired(2);

	ScavTrap another_trap("Goldy");

	another_trap.guardGate();
	another_trap.beRepaired(3);
	another_trap.takeDamage(1);
	another_trap.attack("Villy");

	return 0;

}