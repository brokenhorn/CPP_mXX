#ifndef CPPM_FRAGTRAP_HPP
#define CPPM_FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(FragTrap const & src);

	FragTrap & operator=(FragTrap const & i);



	void highFivesGuys(void);
	void   attack(std::string const & target) ;
};


#endif //CPPM_FRAGTRAP_HPP
