#include "HumanB.hpp"



HumanB::HumanB(std::string n_name): weapon_name()
{
	this->name = n_name;
}

void HumanB::setWeapon(Weapon *w_name)
{
	this->weapon_name = w_name;

}

void HumanB::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon_name->getType() << std::endl;
}