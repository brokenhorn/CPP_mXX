#ifndef CPPM_CONTACT_H
#define CPPM_CONTACT_H

#include <string>
#include <iostream>
#include <iomanip>

class Contact
{
private:

public:
		Contact();
		int index;
		std::string info[5];
		void ft_insert(int ListN);
};


#endif
