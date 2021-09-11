#include "Fixed.hpp"

Fixed::Fixed() : fixedPV(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &rhs): fixedPV(0)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
	//return;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Assignation operator called" << std::endl;

	this->fixedPV = rhs.getRawBits();

	return *this;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixedPV;
}

void Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixedPV = raw;
}