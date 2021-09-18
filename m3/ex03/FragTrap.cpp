#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "Constructor(FragTrap) is called with default parametrs" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_hitpoints = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "Constructor(FragTrap) is called with custom parametrs" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor(FragTrap) is called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src)
{
	std::cout << "Copy constructor(FragTrap) called" << std::endl;
	*this = src;
}

FragTrap &FragTrap::operator=(__unused const FragTrap &i)
{
	std::cout << "Assigment operator(FragTrap) is called" << std::endl;

	return *this;
}



void FragTrap::highFivesGuys()
{
	std::cout << _name << " is requesting  positive high fives" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
	std::cout << "FragTrap " << _name << " attack " << target << " , causing " <<  _attack_damage << " points of damage!" << std::endl;
}