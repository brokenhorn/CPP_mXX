#include "Character.hpp"

Character::Character():_name("base_name")
{
	std::cout << "Constructor(Character) is called" << std::endl;
	this->_materia[0] = NULL;
	this->_materia[1] = NULL;
	this->_materia[2] = NULL;
	this->_materia[3] = NULL;
}

Character::Character(std::string name): _name(name)
{
	std::cout << "Constructor(Character) is called" << std::endl;
	this->_materia[0] = NULL;
	this->_materia[1] = NULL;
	this->_materia[2] = NULL;
	this->_materia[3] = NULL;
}

Character::~Character()
{
	std::cout << "Destructor(Character) is called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i])
			delete this->_materia[i];
	}
}

Character::Character(const Character &src)
{
	std::cout << "Copy(Character) is called" << std::endl;
	*this = src;
}

Character &Character::operator=(const Character &src)
{
	if (&src != this)
	{
		this->_name = src._name;
		for (int i = 0; i < 4; i++)
		{
			if (this->_materia[i])
				delete this->_materia[i];
			this->_materia[i] = src._materia[i];
		}
	}
	return *this;
}

const std::string &Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria *m)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_materia[i] == NULL)
		{
			this->_materia[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (this->_materia[idx] && this->_materia[idx] != NULL)
		this->_materia[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx <= 4)
		this->_materia[idx]->use(target);
}