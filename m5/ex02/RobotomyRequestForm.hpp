//
// Created by Voncile Maricruz on 9/17/21.
//

#ifndef CPPM_ROBOTOMYREQUESTFORM_HPP
#define CPPM_ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
private:
	std::string _target;
	int _random;
public:
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm const &  src);

	RobotomyRequestForm & operator=(RobotomyRequestForm const & src);

	void execute(Bureaucrat const & executor);

	std::string getTarget();


	class _Failure: public std::exception
	{
		virtual const char* what() const throw();
	};
};


#endif //CPPM_ROBOTOMYREQUESTFORM_HPP
