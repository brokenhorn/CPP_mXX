#include "Ice.hpp"

Ice::Ice()
{
	std::cout << "Constructor(Ice) is called" << std::endl;
	this->type = "ice";
}

Ice::~Ice()
{
	std::cout << "Destructor(Ice) is called" << std::endl;
}

Ice::Ice(const Ice &src)
{
	std::cout << "Cope(Ice) is called" << std::endl;
	*this = src;
}

Ice &Ice::operator=(const Ice &src)
{
	std::cout << "Assigment operator(Animal) is called" << std::endl;
	if(&src != this)
		AMateria::operator=(src);
	return *this;
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice *Ice::clone() const
{
	Ice * tmp = new Ice(*this);
	return tmp;
}