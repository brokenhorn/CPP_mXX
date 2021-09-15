#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "Constructor(ScavTrap) is called with default parametrs" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "Constructor(ScavTrap) is called with custom parametrs" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor(ScavTrap) is called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	std::cout << "Copy constructor(ScavTrap) called" << std::endl;
	*this = src;
}

ScavTrap &ScavTrap::operator=(__unused const ScavTrap &i)
{
	std::cout << "Assigment operator(ScavTrap) is called" << std::endl;

	return *this;
}

void ScavTrap::guardGate()
{
	std::cout<< "Scavtrap " << _name << "have enterred in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	std::cout << "Scavtrap " << _name << " attack " << target << " , causing " <<  _attack_damage << " points of damage!" << std::endl;
}

