#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "Constructor(AMateria) is called" << std::endl;
}


AMateria::~AMateria()
{
	std::cout << "Destructor(AMateria) is called" << std::endl;
}

AMateria::AMateria(const AMateria &src)
{
	std::cout << "Copy(AMateria) is called" << std::endl;
	*this = src;
}

AMateria &AMateria::operator=(const AMateria &src)
{
	std::cout << "Assigment operator(AMateria) is called" << std::endl;
	if (&src != this)
		type = src.type;
	return *this;
}

const std::string &AMateria::getType() const
{
	//std::cout << "Constructor(AMateria) is called with default parametrs" << std::endl;
	return this->type;
}

void AMateria::use(ICharacter &target)
{
	target.getName();
}
