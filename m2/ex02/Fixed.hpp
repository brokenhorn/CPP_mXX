
#ifndef CPPM_FIXED_HPP
#define CPPM_FIXED_HPP

#include <string>
#include <iostream>
#include "fstream"
#include <iomanip>
#include <cmath>

class Fixed {
private:
	int fixedPV;
	static const int nfb;


public:
	float *val;
	Fixed();
	~Fixed();

	Fixed(Fixed const & rhs);

	Fixed(const int nbr);
	Fixed(const float nbr);

	Fixed & operator=(Fixed const & rhs);

	float operator+(Fixed const & i);
	float operator-(Fixed const & i);
	float operator*(Fixed const & i);
	float operator/(Fixed const & i);

	bool  operator>(Fixed const & i);
	bool  operator>=(Fixed const & i);
	bool  operator<(Fixed const & i);
	bool  operator<=(Fixed const & i);
	bool  operator==(Fixed const & i);
	bool  operator!=(Fixed const & i);

	Fixed & operator++();
	Fixed & operator--();
	Fixed operator++(int i);
	Fixed operator--(int i);

	static Fixed & min(Fixed  &first, Fixed  &second);
	static const Fixed & min(const Fixed  &first, const Fixed  &second);

	static Fixed & max(Fixed  &first, Fixed  &second);
	static const Fixed & max(const Fixed  &first, const Fixed  &second);

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif //CPPM_FIXED_HPP
