

#ifndef CPPM_HUMANB_HPP
#define CPPM_HUMANB_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include "Weapon.hpp"

class HumanB {
public:
	 void attack();
	HumanB (std::string h_name);
	 void setWeapon( Weapon *w_name);

private:
	std::string name;
	Weapon *weapon_name;
};


#endif //CPPM_HUMANB_HPP
