#ifndef CPPM_CONTACT_H
#define CPPM_CONTACT_H

#include <string>
#include <iostream>
#include <iomanip>

class Contact
{
private:
	std::string _f_name;
	std::string _l_name;
	std::string _nickname;
	std::string _pn;
	std::string _ds;
public:
		Contact();
		int index;
		std::string info[5];
		void ft_insert(int ListN);
		std::string get_field(int i);
};


#endif
