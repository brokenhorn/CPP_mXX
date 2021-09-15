#ifndef CPPM_FRAGTRAP_HPP
#define CPPM_FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(FragTrap const & src);

	FragTrap & operator=(FragTrap const & i);



	void highFivesGuys(void);
};


#endif //CPPM_FRAGTRAP_HPP
