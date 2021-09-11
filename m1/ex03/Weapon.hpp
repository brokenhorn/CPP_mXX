
#ifndef CPPM_WEAPON_HPP
#define CPPM_WEAPON_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Weapon
{
private:
	std::string type;

public:
	Weapon(std::string w_type);
	Weapon();
	const std::string &getType() const;
	void  setType(std::string new_type);

};


#endif
