#ifndef CPPM_ZOMBIE_HPP
#define CPPM_ZOMBIE_HPP

#include <string>

class Zombie
{
private:
	std::string z_name;
public:
	Zombie(std::string name);
	Zombie();
	~Zombie(void);
	void announce(void) const;
	void give_name(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif
