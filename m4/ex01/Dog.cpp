#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Constructor(Dog) is called with default parametrs" << std::endl;
	this->_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Destructor(Dog) is called" << std::endl;
	delete _brain;
}

Dog::Dog(__unused std::string type): Animal("Dog")
{
	std::cout << "Constructor(Dog) is called with custom parametrs" << std::endl;
	_brain = new Brain();
}

Dog::Dog(const Dog & src)
{
	std::cout << "Copy constructor(Dog) called" << std::endl;
	*this = src;
}

Dog &Dog::operator=(__unused const Dog & src)
{
	std::cout << "Assigment operator(Dog) is called" << std::endl;
	if (this != &src)
	{
		*_brain = *src._brain;
		Animal::operator=(src);
	}
	return *this;
}