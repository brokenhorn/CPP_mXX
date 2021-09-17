#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "Constructor(WrongCat) is called with default parametrs" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor(WrongCat) is called" << std::endl;
}

WrongCat::WrongCat(__unused std::string type): WrongAnimal("WrongCat")
{
	std::cout << "Constructor(WrongCat) is called with custom parametrs" << std::endl;

}

WrongCat::WrongCat(const WrongCat & src)
{
	std::cout << "Copy constructor(WrongCat) called" << std::endl;
	*this = src;
}

WrongCat &WrongCat::operator=(__unused const WrongCat & src)
{
	std::cout << "Assigment operator(WrongCat) is called" << std::endl;
	if (this != &src)
	{
		WrongCat::operator=(src);
	}
	return *this;
}