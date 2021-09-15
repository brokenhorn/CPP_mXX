
#ifndef CPPM_SCAVTRAP_HPP
#define CPPM_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & src);
	~ScavTrap();

	ScavTrap & operator=(ScavTrap const & i);

	void guardGate();

	 void   attack(std::string const & target) ;

};


#endif
