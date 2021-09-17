#include "Cure.hpp"

Cure::Cure():AMateria()
{
	std::cout << "Constructor(Cure) is called" << std::endl;
	this->type = "cure";
}

Cure::~Cure()
{
	std::cout << "Destructor(Cure) is called" << std::endl;
}

Cure::Cure(const Cure &src)
{
	std::cout << "Copy(Cure) is called" << std::endl;
	*this = src;
}

Cure &Cure::operator=(const Cure &src)
{
	std::cout << "Assigment operator(Cure) is called" << std::endl;
	if (&src != this)
		AMateria::operator=(src);
	return *this;
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}

Cure *Cure::clone() const
{
	Cure *tmp = new Cure(*this);
	return tmp;
}