#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "Constructor(MateriaSource) is called" << std::endl;
	_materia[0] = NULL;
	_materia[1] = NULL;
	_materia[2] = NULL;
	_materia[3] = NULL;
}

MateriaSource::~MateriaSource()
{
	std::cout << "Destructor(MateriaSource) is called" << std::endl;

	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i])
			delete this->_materia[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	std::cout << "Copy(MateriaSource) is called" << std::endl;

	*this = src;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src)
{
	if (this != &src)
	{
		for (int i = 0; i < 4; i++)
			this->_materia[i] = src._materia[i];
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] == 0)
		{
			this->_materia[i] = m;
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i] && this->_materia[i]->getType() == type)
			return this->_materia[i]->clone();
	}
	return 0;
}