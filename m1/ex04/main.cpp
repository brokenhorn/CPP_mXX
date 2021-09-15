#include <string>
#include <iostream>
#include "fstream"
#include <iomanip>


int main(__unused int argc, char **argv)
{
	std::ifstream file  (argv[1]);
	std::ofstream new_file ("newf.replace");
	std::string s1;
	std::string s2;
	std::string line;
	size_t pos;

	if (argc < 4 || argc > 4)
	{
		std::cout << "Error argc" << std::endl;
		return -1;
	}

	if (new_file.is_open())
	{}
	else
	{
		std::cout << "Error file" << std::endl;
		return -1;
	}
	if (file.is_open())
	{}
	else
	{
		std::cout << "Error file" << std::endl;
		return -1;
	}

	s1 = argv[2];
	s2 = argv[3];

	while (std::getline(file, line))
	{
		if (std::strcmp(argv[2], argv[3]))
		{
			while (line.find(s1) != (size_t) -(1))
			{
				pos = line.find(s1);
				line.insert(pos, s2);
				line.erase(line.find(s1), s1.length());
			}
		}
		if (!(new_file << line << std::endl))
		{
			std::cout << "Error writing" << std::endl;
			return -1;
		}
	}
	file.close();
	new_file.close();

}