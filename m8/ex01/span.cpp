#include "span.hpp"

span::span(unsigned int i):_size(i)
{
}

span::~span()
{}

span::span(const span &src)
{
	std::vector<int>::iterator it;
	*this = src;
}

span &span::operator=(const span &src)
{
	int i = 0;
	std::vector<int>::iterator it;
	if (this != &src)
	{
		_size = src._size;
		list.resize(src.list.size());
		for (it = list.begin(); it != list.end(); it++)
		{
			*it = src.list[i];
			i++;
		}
	}
	return *this;
}

const char *span::_NStored::what() const throw()
{
	return "Container is filled";
}

const char *span::_NoSpan::what() const throw()
{
	return "There is no span";
}

void span::addNumber(int i)
{
	if(_size > list.size())
		list.push_back(i);
	else
		throw _NStored();
}

void span::addNumber(std::vector<int>::iterator b, std::vector<int>::iterator e)
{
	if (e - b <= _size)
		std::copy(b, e, std::back_inserter(list));
	else
		throw _NStored();
}


int span::shortestSpan()
{
	long long int span = 2147483648;
	std::vector<int>::iterator it;
	for (it = list.begin(); it != list.end() - 1; it++)
	{
		if (span >  abs(*it - *(it + 1)))
			span = abs(*it - *(it + 1));
	}
	if (span == 2147483648)
		throw _NoSpan();
	return span;
}

int span::longestSpan()
{
	int span = 0;
	std::vector<int>::iterator it;
	for (it = list.begin(); it != list.end() - 1; it++)
	{
		if (span <  abs(*it - *(it + 1)))
			span = abs(*it - *(it + 1));
	}
	if (span == 0)
		throw _NoSpan();
	return span;
}