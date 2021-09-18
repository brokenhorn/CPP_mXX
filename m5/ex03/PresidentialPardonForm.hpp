//
// Created by Voncile Maricruz on 9/17/21.
//

#ifndef CPPM_PRESIDENTIALPARDONFORM_HPP
#define CPPM_PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
private:
	std::string _target;
	std::string _f_name;

public:
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm const &  src);

	PresidentialPardonForm & operator=(PresidentialPardonForm const & src);

	void execute(Bureaucrat const & executor);

	Form* cmp_f(std::string target);

	std::string getTarget();
	std::string getF();
};


#endif //CPPM_PRESIDENTIALPARDONFORM_HPP
