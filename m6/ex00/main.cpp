#include <string>
#include <iostream>


int define_argv(std::string str);
int convert(int type, std::string str);


int main(int argc, char **argv)
{
	std::string str = argv[1];

	if (argc != 2 || str.empty())
	{
		std::cout << "Argument error" << std::endl;
		return -1;
	}
	return convert(define_argv(str), str);
}
