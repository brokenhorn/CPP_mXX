
#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Constructor(Cat) is called with default parametrs" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Destructor(Cat) is called" << std::endl;
}

Cat::Cat(__unused std::string type): Animal("Cat")
{
	std::cout << "Constructor(Cat) is called with custom parametrs" << std::endl;

}

Cat::Cat(const Cat & src)
{
	std::cout << "Copy constructor(Cat) called" << std::endl;
	*this = src;
}

Cat &Cat::operator=(__unused const Cat & src)
{
	std::cout << "Assigment operator(Cat) is called" << std::endl;
	if (this != &src)
	{
		Cat::operator=(src);
	}
	return *this;
}