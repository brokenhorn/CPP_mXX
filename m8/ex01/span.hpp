//
// Created by Voncile Maricruz on 9/24/21.
//

#ifndef CPPM_SPAN_HPP
#define CPPM_SPAN_HPP

#include "string"
#include "iostream"
#include "vector"

class span {
private:
	int _size;
	std::vector<int> list;
public:
	span(unsigned int i);
	~span();
	span(span const & src);

	span & operator=(span const & src);

	void addNumber(int i);
	void addNumber(std::vector<int>::iterator b, std::vector<int>::iterator e);

	class _NStored: public std::exception
	{
		virtual const char* what() const throw();
	};

	class _NoSpan: public std::exception
	{
		virtual const char* what() const throw();
	};

	int shortestSpan();
	int longestSpan();
};


#endif //CPPM_SPAN_HPP
