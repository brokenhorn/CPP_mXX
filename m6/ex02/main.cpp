#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base * generate(void)
{
	srand(time(NULL));
	int rmd = rand() % 3;

	switch (rmd)
	{
		case 0:
			std::cout << "class A is created" << std::endl;
			return new A();
			break;
		case 1:
			std::cout << "class B is created" << std::endl;
			return new B();
			break;
		case 2:
			std::cout << "class C is created" << std::endl;
			return new C();
			break;
		default:
			break;
	}
	return NULL;
}

void identify(Base* p)
{
	A* zero = dynamic_cast<A*>(p);
	B* first = dynamic_cast<B*>(p);
	C* second = dynamic_cast<C*>(p);

	if (zero)
	{
		std::cout << "identify(Base* p) returns A class" << std::endl;
		return ;
	}
	else if (first)
	{
		std::cout << "identify(Base* p) returns B class" << std::endl;
		return ;
	}
	else if (second)
	{
		std::cout << "identify(Base* p) returns A class" << std::endl;
		return ;
	}
}

void identify(Base& p)
{
	try
	{
		__unused A& zero = dynamic_cast<A&>(p);
		std::cout << "identify(Base& p) returns A class" << std::endl;
		return ;
	}
	catch (std::bad_cast &bc)
	{}

	try
	{
		__unused B& first = dynamic_cast<B&>(p);
		std::cout << "identify(Base& p) returns B class" << std::endl;
		return ;
	}
	catch (std::bad_cast &bc)
	{}

	try
	{
		__unused C& second = dynamic_cast<C&>(p);
		std::cout << "identify(Base& p) returns C class" << std::endl;
		return ;
	}
	catch (std::bad_cast &bc)
	{}
}

int main()
{
	Base *ptr =generate();

	identify(ptr);

	identify(*ptr);

	delete ptr;
	return 0;
}