#include "Phonebook.h"

int check_comd(std::string comd)
{
	std::string check (comd);

	if (check.compare("ADD") == 0)
		return 1;
	else if (check.compare("SEARCH") == 0)
		return 2;
	else if (check.compare("EXIT") == 0)
		exit(1);
	else
		std::cout << "Wrong command\n";
	return 0;
}
int main()
{
	Phonebook pb;
	std::string comd;
	int ListN;
	int check;

	ListN = 0;
	while (1)
	{
		std::cout << "Type ADD, SEARCH or EXIT\n";
		std::cin >> comd;
		check = check_comd(comd);
		if (check == 1)
		{
			pb.Add(ListN);
			ListN++;
			if (ListN == 8)
				ListN = 0;
			continue;
		}
		else if (check == 2)
		{
			pb.ShowAll();
			continue;
		}
		else if (check == 0)
			continue;

	}
}