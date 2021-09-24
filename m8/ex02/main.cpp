#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
//[...]
	mstack.push(0);
	//MutantStack<int>::iterator its = mstack.begin();
	MutantStack<int>::iterator it1 = mstack.begin();
	MutantStack<int>::iterator ite1 = mstack.end();
	++it1;
	--it1;
	while (it1 != ite1)
	{
		std::cout << *it1 << std::endl;
		++it1;
	}
	std::stack<int> s(mstack);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	int i = 0;
	std::cout << "count: " << mstack.size() << std::endl;
	while (it != ite)
	{
		std::cout << i << " : " << *it << std::endl;
		++it;
		i++;
	}
	std::cout << std::endl;
	std::cout << "begin: " << *mstack.begin() << std::endl;
	std::cout << "end: " << *(mstack.end() - 1) << std::endl;
	std::cout << "reverse begin: " << *mstack.rbegin() << std::endl;
	std::cout << "reverse end: " << *(mstack.rend() - 1) << std::endl << std::endl;
	std::cout << "+ 42" << std::endl;
	mstack.push(42);
	i = 0;
	it = mstack.begin();
	ite = mstack.end();
	std::cout << "count: " << mstack.size() << std::endl;
	while (it != ite)
	{
		std::cout << i << " : " << *it << std::endl;
		++it;
		i++;
	}
	std::cout << std::endl;
	std::cout << "begin: " << *mstack.begin() << std::endl;
	std::cout << "end: " << *(mstack.end() - 1) << std::endl;
	std::cout << "reverse begin: " << *mstack.rbegin() << std::endl;
	std::cout << "reverse end: " << *(mstack.rend() - 1) << std::endl << std::endl;

	return 0;
}