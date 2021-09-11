

#ifndef CPPM_HUMANA_HPP
#define CPPM_HUMANA_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include "Weapon.hpp"

class HumanA {
public:
	void attack();
	HumanA(std::string h_name, Weapon& w_name);
	//HumanA();

private:
	std::string name;
	Weapon &weapon_name;

};


#endif //CPPM_HUMANA_HPP
