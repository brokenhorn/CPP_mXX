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
		i++;
	}
}