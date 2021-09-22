//
// Created by Voncile Maricruz on 9/22/21.
//

#ifndef CPPM_WHATEVER_HPP
#define CPPM_WHATEVER_HPP

#include "string"

template <typename T>
T max(T const & a, T const b)
{
	return ( (a > b) ? a : b );
}


template <typename T>
T min(T const & a, T const b)
{
	return ( (a < b) ? a : b );
}


template <typename T>
void swap(T & a, T & b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

#endif //CPPM_WHATEVER_HPP
