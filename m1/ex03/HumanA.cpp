#include "HumanA.hpp"

//HumanA::HumanA():
//{
//
//}

HumanA::HumanA(std::string h_name, Weapon &w_name) : weapon_name(w_name)
{
	this->name = h_name;
	this->weapon_name = w_name.getType();
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon_name.getType() << std::endl;
}

