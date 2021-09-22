#include "Data.hpp"

Data::Data(): v(1)
{
	std::cout << "Constructor is called" << std::endl;
}

Data::~Data()
{
	std::cout << "Destructor is called" << std::endl;
}

Data::Data(const Data &src)
{
	std::cout << "Copy Constructor is called" << std::endl;
	*this = src;
}

int Data::getV()
{
	return this->v;
}

Data &Data::operator=(__unused const Data &src)
{
	return *this;
}