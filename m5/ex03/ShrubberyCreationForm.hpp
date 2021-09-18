//
// Created by Voncile Maricruz on 9/17/21.
//

#ifndef CPPM_SHRUBBERYCREATIONFORM_HPP
#define CPPM_SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
private:
	std::string _target;
	std::string _f_name;
public:
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm const &  src);

	ShrubberyCreationForm & operator=(ShrubberyCreationForm const & src);

	void execute(Bureaucrat const & executor);

	Form* cmp_f(std::string target);

	std::string getTarget();

	std::string getF();
};


#endif //CPPM_SHRUBBERYCREATIONFORM_HPP
