#include "Array.hpp"


int main()
{
	Array<int> numbers(4);
	srand(time(NULL));
	for (int i = 0; i < 4 ; i++)
	{
		const int value = rand() % 5;
		numbers[i] = value;
	}
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}
	try
	{
		numbers[2] = 2;
		numbers[-1] = -1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[2] = 100;
		numbers[100] = 100;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << numbers << std::endl;
	return 0;
}

