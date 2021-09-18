#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type()
{
	std::cout << "Constructor(WrongAnimal) is called with default parametrs" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor(WrongAnimal) is called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): type(type)
{
	std::cout << "Constructor(WrongAnimal) is called with custom parametrs" << std::endl;

}

WrongAnimal::WrongAnimal(const WrongAnimal & src)
{
	std::cout << "Copy constructor(WrongAnimal) called" << std::endl;
	*this = src;
}

WrongAnimal &WrongAnimal::operator=(__unused const WrongAnimal & src)
{
	std::cout << "Assigment operator(WrongAnimal) is called" << std::endl;
	if (this != &src)
	{
		WrongAnimal::operator=(src);
	}
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "[Wrong(Animal) Sound of a " << this->type << " ]" << std::endl;
}

std::string WrongAnimal::getType() const
{

	return this->type ;
}