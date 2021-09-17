//
// Created by Voncile Maricruz on 9/15/21.
//

#ifndef CPPM_ICHARACTER_HPP
#define CPPM_ICHARACTER_HPP

#include <string>
#include <iostream>
#include "fstream"
#include <iomanip>
class AMateria;

class ICharacter {
public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};


#endif //CPPM_ICHARACTER_HPP
