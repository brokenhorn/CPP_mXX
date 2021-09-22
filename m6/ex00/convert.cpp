#include <string>
#include <iostream>
#include <climits>
#include <iomanip>
#include <cerrno>
#include <cfloat>
#include <cstdlib>
#include <math.h>

int to_char(std::string str)
{
	std::cout << "char: '" << str[0] << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
	std::cout << "float: " << static_cast<float>(str[0]) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(str[0]) << ".0" << std::endl;

	return 1;
}

int to_int(std::string str)
{
		char schar;
		float sfloat;
		double sdouble;
		int sint;

		long int	lint = stol(str);
		if (lint < INT_MIN || lint > INT_MAX)
		{
			std::cout << "Out of int range" << std::endl;
			return -1;
		}
		sint = stoi(str);
		schar = static_cast<char>(sint);
		sfloat = static_cast<float>(sint);
		sdouble = static_cast<double>(sint);

		if (sint > CHAR_MAX ||  sint < CHAR_MIN)
			std::cout << "char: impossible" << std::endl;
		else if (schar < 32 || schar > 126)
			std::cout << "char: non-displayble" << std::endl;
		else
			std::cout << "char: '" << schar << "'" << std::endl;

		std::cout << "int: " << sint << std::endl;
		std::cout << "float: " << sfloat << ".0f" << std::endl;
		std::cout << "double: " << sdouble << ".0" << std::endl;
		return (1);
}

int to_float(std::string str)
{
	char schar;
	double sdouble;
	int sint;

	long int lint;
	float 	f = stof(str);

	if (errno ==  ERANGE)
	{
		std::cout << "float out of range" << std::endl;
		return -1;
	}

	schar = static_cast<char>(f);
	sdouble = static_cast<double>(f);
	lint = static_cast<long>(f);
	sint = static_cast<int>(f);

	if (lint > CHAR_MAX ||  lint < CHAR_MIN)
		std::cout << "char: impossible" << std::endl;
	else if (schar < 32 || schar > 126)
		std::cout << "char: non-displayble" << std::endl;
	else
		std::cout << "char: '" << schar << "'" << std::endl;

	if (lint < INT_MIN || lint > INT_MAX)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << sint << std::endl;
	if (fmod(f, 1))
	{
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << sdouble << std::endl;
	}
	else
	{
		std::cout << "float: " << f << ".0f" << std::endl;
		std::cout << "double: " << sdouble << ".0" << std::endl;
	}
	return (1);
}

int to_double(std::string str)
{
	char schar;
	float sfloat;
	int sint;

	long int lint;
	double 	d = stod(str);

	if (errno ==  ERANGE)
	{
		std::cout << "double out of range" << std::endl;
		return -1;
	}

	schar = static_cast<char>(d);
	sfloat = static_cast<float>(d);
	lint = static_cast<long>(d);
	sint = static_cast<int>(d);

	if (lint > CHAR_MAX ||  lint < CHAR_MIN)
		std::cout << "char: impossible" << std::endl;
	else if (schar < 32 || schar > 126)
		std::cout << "char: non-displayble" << std::endl;
	else
		std::cout << "char: '" << schar << "'" << std::endl;

	if (lint < INT_MIN || lint > INT_MAX)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << sint << std::endl;
	if (fmod(d, 1))
	{
		std::cout << "float: " << sfloat << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
	}
	else
	{
		std::cout << "float: " << sfloat << ".0f" << std::endl;
		std::cout << "double: " << d << ".0" << std::endl;
	}
	return (1);
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
