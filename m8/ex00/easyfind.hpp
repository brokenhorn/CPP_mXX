

#ifndef CPPM_EASYFIND_HPP
#define CPPM_EASYFIND_HPP



#include "string"
#include "iostream"
#include "map"
#include "vector"
#include "list"

template <typename T>
int easyfind(T container, int to_find)
{
	typename T::iterator p = std::find(container.begin(), container.end(), to_find);
	if (*p == to_find)
	{
		std::cout << "Easyfind: Succsess" << std::endl;
		return 1;
	}
	else
	{
		std::cout << "Easyfind: not Succsess" << std::endl;
		return -1;
	}
}

#endif //CPPM_EASYFIND_HPP
