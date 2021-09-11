#include <string>
#include <iostream>
#include "fstream"
#include <iomanip>

#ifndef CPPM_KAREN_HPP
#define CPPM_KAREN_HPP


class Karen {

private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

public:
	void complain( std::string level );
};


#endif
