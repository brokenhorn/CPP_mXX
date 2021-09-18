#include "Animal.hpp"

Animal::Animal():type()
{
	std::cout << "Constructor(Animal) is called with default parametrs" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Destructor(Animal) is called" << std::endl;
}

Animal::Animal(std::string type): type(type)
{
	std::cout << "Constructor(Animal) is called with custom parametrs" << std::endl;

}

Animal::Animal(const Animal & src)
{
	std::cout << "Copy constructor(Animal) called" << std::endl;
	*this = src;
}

Animal &Animal::operator=(__unused const Animal & src)
{
	std::cout << "Assigment operator(Animal) is called" << std::endl;
	if (this != &src)
	{
		this->type = src.type;
	}
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "[Sound of a " << this->type << " ]" << std::endl;
}

std::string Animal::getType() const
{
	return this->type ;
}

