//
// Created by Voncile Maricruz on 9/17/21.
//

#ifndef CPPM_INTERN_HPP
#define CPPM_INTERN_HPP

#include <string>
#include <iostream>
#include "fstream"
#include <iomanip>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:

	Intern();
	~Intern();
	Intern(Intern const & src);

	Intern & operator=(Intern const & src);

	 Form* makeForm(std::string request, std::string target);

	class _FormNotKnown: public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

};


#endif //CPPM_INTERN_HPP
