#include "DiamondTrap.hpp"

int main()
{
//	ClapTrap trap("Bobby");
//
//	trap.attack("Teddy");
//	trap.takeDamage(2);
//	trap.beRepaired(2);
//
//	ScavTrap another_trap("Goldy");
//
//	another_trap.guardGate();
//	another_trap.beRepaired(3);
//	another_trap.takeDamage(1);
//	another_trap.attack("Villy");
//
//	FragTrap other_trap("Banny");
//
//	other_trap.highFivesGuys();
//	other_trap.beRepaired(5);
//	other_trap.takeDamage(4);
//	other_trap.attack("Jimmy");

	DiamondTrap traps("Gorlum");

	traps.attack("Tree");
	traps.takeDamage(10);
	traps.beRepaired(2);
	traps.whoAmI();

	return 0;

}