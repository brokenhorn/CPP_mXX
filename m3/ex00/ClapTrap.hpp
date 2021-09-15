#ifndef CPPM_CLAPTRAP_HPP
#define CPPM_CLAPTRAP_HPP

#include <string>
#include <iostream>
#include "fstream"
#include <iomanip>

class ClapTrap {

private:
	std::string _name;
	int _hitpoints;
	__unused int _energy_points;
	int _attack_damage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & src);
	~ClapTrap();

	ClapTrap & operator =(ClapTrap const & i);

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


#endif //CPPM_CLAPTRAP_HPP
