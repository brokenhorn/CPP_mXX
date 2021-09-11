#include "Zombie.hpp"
#include <string>
#include <iostream>
#include <iomanip>

Zombie::Zombie(std::string name)
{
	this->z_name = name;
}

Zombie::Zombie()
{

}

Zombie::~Zombie()
{
	std::cout << this->z_name << " is dead" << std::endl;
}

void Zombie::announce() const
{
	std::cout << this->z_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::give_name(std::string name)
{
	this->z_name = name;
}