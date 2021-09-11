#include "Phonebook.h"

void place_field(Contact elem)
{
	int i;
	std::string subs;

	i = 0;
	if (elem.index != -1)
	{
		std::cout << std::setw(10) << elem.index << "|";
		while (i < 3)
		{
			if (elem.info[i].size() <= 10)
			{
				std::cout << std::setw(10) << elem.info[i] << "|";
			}
			else
			{
				subs = elem.info[i].substr(0, 9);
				std::cout << std::setw(9) << subs << "." << "|";
			}
			i++;
		}
		std::cout << "\n";
	}

}

int index_search(Contact *list, std::string users_index)
{
	int i;
	int j;
	int u_index;
	std::string::iterator it;

	i = 0;
	j = 0;
	it = users_index.begin();

	while (it != users_index.end())
	{
		if (std::isdigit(*it) == 0)
			return (-1);
		it++;
	}
	u_index = std::stoi(users_index);
	while (i !=  8)
	{
		if (list[i].index == -1)
			break;
		if (list[i].index == u_index)
		{
			while (j != 5)
			{
				std::cout << list[i].info[j] << "\n";
				j++;
			}
			std::cout << "\n";
			return(1);
		}
		i++;
	}
	return (-1);
}

void Phonebook::ShowAll()
{
	int i;
	std::string users_index;

	i = 0;
	if (list[i].index == -1)
	{
		std::cout << "No contacts\n";
		return;
	}
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << "|\n";
	while (i < 8)
	{
		place_field(list[i]);
		i++;
	}
	std::cout << "\n";
	std::cout << "Choose an index\n";
	std::cin >> users_index;
	while (index_search(list, users_index) == -1)
	{
		std::cout << "No such index\n";
		std::cout << "Choose an index\n";
		std::cin >> users_index;
	}

}

void Phonebook::Add(int ListN)
{
	list[ListN].ft_insert(ListN);
}