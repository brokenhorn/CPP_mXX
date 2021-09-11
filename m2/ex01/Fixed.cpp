#include "Fixed.hpp"

const int Fixed::nfb = 8;

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

Fixed::Fixed(const int nbr)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixedPV = nbr * (1 << this->nfb);
}

Fixed::Fixed(const float nbr)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixedPV = roundf((1 << this->nfb) * nbr);
}

float Fixed::toFloat() const
{
	return (float)this->fixedPV/ (float)(1 << this->nfb);
}

int Fixed::toInt() const
{
	return this->fixedPV/(1 << this->nfb);
}

std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return o;
}