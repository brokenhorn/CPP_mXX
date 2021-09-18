#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Constructor(Dog) is called with default parametrs" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Destructor(Dog) is called" << std::endl;
}

Dog::Dog(__unused std::string type): Animal("Dog")
{
	std::cout << "Constructor(Dog) is called with custom parametrs" << std::endl;

}

Dog::Dog(const Dog & src)
{
	std::cout << "Copy constructor(Dog) called" << std::endl;
	*this = src;
}

void Dog::makeSound() const
{
	std::cout << "[Sound of a " << this->type << " ]" << std::endl;
}

Dog &Dog::operator=(__unused const Dog & src)
{
	std::cout << "Assigment operator(Dog) is called" << std::endl;
	if (this != &src)
	{
		Dog::operator=(src);
	}
	return *this;
}