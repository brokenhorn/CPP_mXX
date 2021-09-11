
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
	Fixed();
	~Fixed();

	Fixed(Fixed const & rhs);

	Fixed(const int nbr);
	Fixed(const float nbr);

	Fixed & operator=(Fixed const & rhs);


	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif //CPPM_FIXED_HPP
