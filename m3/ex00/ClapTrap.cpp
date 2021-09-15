#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("Base"), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
 std::cout << "Constructor is called with default parametrs" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Constructor is called with custom parametrs" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor is called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap &ClapTrap::operator=(__unused const ClapTrap &i)
{
	std::cout << "Assigment operator is called" << std::endl;

	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	std::cout << "ClapTrap " << _name << " attack " << target << " , causing " <<  _attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_hitpoints -= amount;
	std::cout << "ClapTrap " << _name << " take damage points: " << amount <<  std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " has been  repaired  and gained " << amount << " of HP points " << std::endl;
}

