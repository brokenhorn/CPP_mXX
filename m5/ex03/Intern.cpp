#include "Intern.hpp"



Intern::Intern()
{
	std::cout << "Constructor(Intern) is called" << std::endl;
}


Intern::Intern(const Intern &src)
{
	std::cout << "Copy(Intern) is called" << std::endl;
	*this = src;
}

Intern::~Intern()
{
	std::cout << "Destructor(Intern) is called" << std::endl;
}

Intern &Intern::operator=(__unused const Intern &src)
{
	return *this;
}

Form* Intern::makeForm(std::string request, std::string target)
{
	std::string requests[3] = {"robotomy request", "pardon request", "shrubbery request"};
	Form* forms[3] = {new RobotomyRequestForm(target), new PresidentialPardonForm(target), new ShrubberyCreationForm(target)};;
	std::string tmp;
	std::string cmp;
	Form* clone;
	int i = 0;
	while (i < 3)
	{
		cmp = requests[i];
		if (cmp == 	request)
		{
			std::cout << "Intern creates " << target << std::endl;
			clone = forms[i]->cmp_f(target);
			delete forms[0];
			delete forms[1];
			delete forms[2];
			return clone;
		}
		i++;
	}
	delete forms[0];
	delete forms[1];
	delete forms[2];
	std::cerr << "Intern couldnt't create form \"" << target << "\"" << std::endl;
	return NULL;
}