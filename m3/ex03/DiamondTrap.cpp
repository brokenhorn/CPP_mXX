#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("base_clap_name"),   FragTrap("base_clap_name"), ScavTrap("base_clap_name")
{
	this->name = "base";
	FragTrap::_hitpoints = 100;
	ScavTrap::_energy_points = 50;
	FragTrap::_attack_damage = 30;

	std::cout << "Constructor(DiamondTrap) is called with default parametrs" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name):  ClapTrap(name + "_clap_name"),   FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name")
{
	this->name = name;
	FragTrap::_hitpoints = 100;
	ScavTrap::_energy_points = 50;
	FragTrap::_attack_damage = 30;

	std::cout << "Constructor(DiamondTrap) is called with custom parametrs" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << this->name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor(DiamondTrap) is called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src)
{
	std::cout << "Copy constructor(DiamondTrap) called" << std::endl;
	*this = src;
}


DiamondTrap &DiamondTrap::operator=(__unused const DiamondTrap &i)
{
	std::cout << "Assigment operator(DiamondTrap) is called" << std::endl;

	return *this;
}


void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}
