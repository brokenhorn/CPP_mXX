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

Fixed & Fixed::operator++()
{
	this->fixedPV++;

	return *this;
}

Fixed & Fixed::operator--()
{
	this->fixedPV--;

	return *this;
}

Fixed Fixed::operator++(__unused int i)
{
	Fixed tmp(*this);

	this->fixedPV++;
	return tmp;
}

Fixed Fixed::operator--(__unused int i)
{
	Fixed tmp(*this);

	this->fixedPV--;
	return tmp;
}

float  Fixed::operator+(const Fixed &i)
{
	this->fixedPV += i.getRawBits();

	return this->toFloat() + i.toFloat();
}

float  Fixed::operator-(const Fixed &i)
{
	this->fixedPV -= i.getRawBits();

	return this->toFloat() - i.toFloat();
}

float  Fixed::operator*(const Fixed &i)
{
	this->fixedPV <<= i.getRawBits();

	return this->toFloat() * i.toFloat();
}

float  Fixed::operator/( const Fixed &i)
{
	this->fixedPV >>= i.getRawBits();

	return this->toFloat() / i.toFloat();
}

bool Fixed::operator>(const Fixed &i)
{
	std::cout << "Bigger than operator called" << std::endl;

	if (this->fixedPV > i.getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator>=(const Fixed &i)
{
	std::cout << "Bigger or equal than operator called" << std::endl;

	if (this->fixedPV >= i.getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator<(const Fixed &i)
{
	std::cout << "lesser than operator called" << std::endl;

	if (this->fixedPV < i.getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator<=(const Fixed &i)
{
	std::cout << "Lesser or equal than operator called" << std::endl;

	if (this->fixedPV <= i.getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator==(const Fixed &i)
{
	std::cout << "Equal operator called" << std::endl;

	if (this->fixedPV == i.getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator!=(const Fixed &i)
{
	std::cout << "Not equal operator called" << std::endl;

	if (this->fixedPV != i.getRawBits())
		return true;
	else
		return false;
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

Fixed & Fixed::min(Fixed &first, Fixed &second)
{

	if (first.toFloat() < second.toFloat())
		return  first;
	else
		return second;
}

const Fixed  & Fixed::min(const Fixed &first, const Fixed &second)
{
	if (first.toFloat() < second.toFloat())
		return  first;
	else
		return second;
}

Fixed & Fixed::max(Fixed &first, Fixed &second)
{
	if (first.toFloat() > second.toFloat())
		return  first;
	else
		return second;
}

Fixed const & Fixed::max(const Fixed &first, const Fixed &second)
{
	if (first.toFloat() > second.toFloat())
		return  first;
	else
		return second;
}