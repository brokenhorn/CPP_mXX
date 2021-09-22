#include <string>
#include <iostream>
#include <climits>
#include <iomanip>
#include <cerrno>
#include <cfloat>
#include <cstdlib>
#include <math.h>

int is_char(std::string str)
{
	if (str.size() != 1 || (str[0] >= '0' && str[0] <= '9'))
		return 0;
	return 1;
}

int is_int(std::string str)
{
	int i = 1;
	if (str[0] == '-' || (str[0] >= '0' && str[0] <= '9'))
	{
		while (str[i])
		{
			if (!(str[i] >= '0' && str[i] <= '9'))
				return 0;
			i++;
		}
		return 2;
	}
	return 0;
}


int is_float(std::string str)
{
	size_t i = 1;
	int dot = 0;
	int f = 0;
	if (str == "-inff" || str == "+inff" || str == "nanf")
		return 3;
	if (str[0] == '-' || (str[0] >= '0' && str[0] <= '9'))
	{
		while (str[i])
		{
			if (!(str[i] >= '0' && str[i] <= '9') && str[i] != '.' && str[i] != 'f')
				return 0;
			if (str[i] == '.')
			{
				if (!(str[i - 1] >= '0' && str[i - 1] <= '9') || dot == 1)
					return 0;
				else
					dot++;
			}
			if (str[i] == 'f')
			{
				if (!(str[i - 1] >= '0' && str[i - 1] <= '9') || f == 1 || i != str.length())
					return 0;
				else
					f++;
			}
			i++;
		}
		if (f == 0 || dot == 0)
			return 0;
		return 3;
	}
	return 0;
}

int is_double(std::string str)
{
	int i = 1;
	int dot = 0;
	if (str == "-inf" || str == "+inf" || str == "nan")
		return 4;
	if (str[0] == '-' || (str[0] >= '0' && str[0] <= '9'))
	{
		while (str[i])
		{
			if (!(str[i] >= '0' && str[i] <= '9') && str[i] != '.' && str[i] != 'f')
				return 0;
			if (str[i] == '.')
			{
				if (!(str[i - 1] >= '0' && str[i - 1] <= '9') || dot == 1)
					return 0;
				else
					dot++;
			}
			i++;
		}
		if (dot == 0)
			return 0;
		return 4;
	}
	return 0;
}

int define_argv(std::string str)
{
	if (is_char(str) == 1)
		return 1;
	if (is_int(str) == 2)
		return 2;
	if (is_float(str) == 3)
		return 3;
	if (is_double(str) == 4)
		return 4;
	return 0;
}