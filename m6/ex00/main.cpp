#include <string>
#include <iostream>
#include <climits>
#include <iomanip>
#include <cerrno>
#include <cfloat>
#include <cstdlib>
#include <math.h>

int define_argv(std::string str);
int convert(int type, std::string str);


int main(int argc, char **argv)
{
	std::string str = argv[1];
	std::string str1 ;
	if (str1.empty())
		return -2;
	if (argc != 2 || str.empty())
	{
		std::cout << "Argument error" << std::endl;
		return -1;
	}
	return convert(define_argv(str), str);
}
