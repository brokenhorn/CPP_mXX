#ifndef CPPM_DIAMONDTRAP_HPP
#define CPPM_DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public FragTrap, public  ScavTrap
{
private:
	std::string name;
public:
	DiamondTrap();
	~DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const & src);

	DiamondTrap & operator=(DiamondTrap const & i);

	void attack(std::string const & target);


	void whoAmI();
};


#endif //CPPM_DIAMONDTRAP_HPP
