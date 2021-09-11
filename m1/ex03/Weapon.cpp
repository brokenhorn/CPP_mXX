#include "Weapon.hpp"

Weapon::Weapon(std::string w_type)
{
	this->type = w_type;
}

const std::string& Weapon::getType() const
{
	return (this->type);
}

void Weapon::setType(std::string new_type)
{
	this->type = new_type;
}

Weapon::Weapon()
{}