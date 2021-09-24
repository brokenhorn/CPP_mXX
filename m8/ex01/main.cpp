#include "span.hpp"

int main()
{
	std::vector<int> v1(10000, 42);
	try
	{

		span sp = span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}

	try
	{
		span sp1 = span(10000);
		sp1.addNumber(v1.begin(), v1.end());
		std::cout << sp1.shortestSpan() << std::endl;
		std::cout << sp1.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}
}