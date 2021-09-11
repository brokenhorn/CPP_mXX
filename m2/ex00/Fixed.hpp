
#ifndef CPPM_FIXED_HPP
#define CPPM_FIXED_HPP

#include <string>
#include <iostream>
#include "fstream"
#include <iomanip>

class Fixed {
private:
	int fixedPV;
	static const int nfb = 8;

public:
	Fixed();
	~Fixed();
	Fixed(Fixed const & rhs);
	Fixed & operator=(Fixed const & rhs);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};


#endif //CPPM_FIXED_HPP
