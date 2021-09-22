//
// Created by Voncile Maricruz on 9/22/21.
//

#ifndef CPPM_ITER_HPP
#define CPPM_ITER_HPP

#include "string"
#include "iostream"

template <typename T>
void iter(T const * array, size_t  length, void (*f)(T const & arg))
{
	size_t i = 0;

	while (i != length)
	{
		(f)(array[i]);
		i++;
	}
}

#endif //CPPM_ITER_HPP
