//
// Created by Voncile Maricruz on 9/15/21.
//

#ifndef CPPM_MATERIASOURCE_HPP
#define CPPM_MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include <string>
#include <iostream>
#include "fstream"
#include <iomanip>
#include "AMateria.hpp"

class MateriaSource: public IMateriaSource
{
private:
	AMateria *_materia[4];
public:
	MateriaSource();
	MateriaSource(MateriaSource const & src	);
	~MateriaSource();

	MateriaSource & operator=(MateriaSource const & src);

	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const & type);
};


#endif //CPPM_MATERIASOURCE_HPP
