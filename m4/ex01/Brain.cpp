#include "Brain.hpp"

Brain::Brain()
{
	std::cout <<"Constructor(Brain) is called" << std::endl;
	int i = 0;
	while (i < 100)
	{
		ideas[i] = "Bad idea";
		i++;
	}
}

Brain::Brain(std::string idea)
{
	std::cout <<"Constructor(Brain) is called" << std::endl;
	int i = 0;
	while (i < 100)
	{
		ideas[i] = idea;
		i++;
	}
}

Brain::~Brain()
{
	std::cout <<"Destructor(Brain) is called" << std::endl;
}

Brain::Brain(const Brain &src)
{
	std::cout << "Copy constructor(Brain) called" << std::endl;

	*this = src;
}

Brain &Brain::operator =(const Brain &src)
{

	if (&src != this)
	{
		for (size_t i = 0; i < this->ideas->size(); i++)
			this->ideas[i] = src.ideas[i];
	}
	return *this;
}


