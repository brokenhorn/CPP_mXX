//
// Created by Voncile Maricruz on 9/15/21.
//

#ifndef CPPM_AMATERIA_HPP
#define CPPM_AMATERIA_HPP

#include <string>
#include <iostream>
#include "fstream"
#include <iomanip>
#include "ICharacter.hpp"

class AMateria {
protected:
	std::string type;

public:
	AMateria();
	virtual 	~AMateria();
	AMateria(AMateria const & src);

	AMateria & operator=(AMateria const & src);

	std::string const & getType() const; //Returns the materia type

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


#endif //CPPM_AMATERIA_HPP
