
#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Constructor(Cat) is called with default parametrs" << std::endl;
	 _brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Destructor(Cat) is called" << std::endl;
	delete _brain;
}

Cat::Cat(__unused std::string type): Animal("Cat")
{
	std::cout << "Constructor(Cat) is called with custom parametrs" << std::endl;
	_brain = new Brain();
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
		_brain = new Brain();
		Animal::operator=(src);
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "[Sound of a " << this->type << " ]" << std::endl;
}