#include <string>
#include <iostream>
#include <climits>
#include <iomanip>
#include <cerrno>
#include <cfloat>
#include <cstdlib>
#include <math.h>

void to_char(std::string str)
{
	std::cout << "char: '" << str[0] << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
	std::cout << "float: " << static_cast<float>(str[0]) << std::endl;
	std::cout << "double: " << static_cast<double>(str[0]) << std::endl;
}

int convert(int type, std::string str)
{
	switch (type)
	{
		case 0:
			std::cout << "Uncorvertable type" << std::endl;
			return 0;
			break;

		case 1:
			return to_char(str);
			break;

		case 2:
			return to_int(str);
			break;

		case 3:
			return to_float(str);
			break;

		case 4:
			return to_double(str);

		default:
			break;

	}
	std::cout << "Uncorvertable type" << std::endl;
	return 0;
}
