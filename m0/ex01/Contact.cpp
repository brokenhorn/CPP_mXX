#include "Contact.h"

Contact::Contact()
{
	index = -1;
}

void Contact::ft_insert(int ListN)
{
	int i;

	i = 0;
	index = ListN + 1;
	while (i < 5)
	{
		if (i == 0)
			std::cout << "Input first name\n";
		else if (i == 1)
			std::cout << "Input last name\n";
		else if (i == 2)
			std::cout << "Input nickname\n";
		else if (i == 3)
			std::cout << "Input phone number\n";
		else if (i == 4)
			std::cout << "Input darkest secret\n";
		std::cin >> info[i];
		if (i == 0)
			_f_name = info[i];
		else if (i == 1)
			_l_name = info[i];
		else if (i == 2)
			_nickname = info[i];
		else if (i == 3)
			_pn = info[i];
		else if (i == 4)
			_ds = info[i];
		i++;
	}
}

std::string Contact::get_field(int i)
{
	if (i == 0)
		return _f_name;
	else if (i == 1)
		return _l_name;
	else if (i == 2)
		return _nickname;
	else if (i == 3)
		return _pn;
	else if (i == 4)
		return _ds;
	return NULL;
}