#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target):Form("RobotomyRequestForm", 72, 45), _target(target), _random(0), _f_name("robotomy request")
{
	std::cout << "Constructor(RobotomyRequestForm) is called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructor(RobotomyRequestForm) is called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
{
	std::cout << "Copy(RobotomyRequestForm) is called" << std::endl;
	*this = src;
}

Form *RobotomyRequestForm::cmp_f(std::string target)
{
	return new RobotomyRequestForm(target);
}

std::string RobotomyRequestForm::getF()
{
	return this->_f_name;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(__unused const RobotomyRequestForm &src)
{
	return *this;
}

std::string RobotomyRequestForm::getTarget()
{
	return this->_target;
}

const char * RobotomyRequestForm::_Failure::what() const throw()
{
	return "it’s a failure";
}

void RobotomyRequestForm::execute(const Bureaucrat &executor)
{
	if (this->getIsSig() == false)
		throw Form::_FormUnsigned();
	if (this->getGradeSigEx() < executor.getGrade())
		throw  Bureaucrat::_GradeTooLowException();

	if (this->_random == 0)
	{
		std::cout << "[ DRILLING NOIES ] " << this->_target << " has been robotomized successfully" << std::endl;
		this->_random = 1;
		std::cout << "Form " << this->getName() << " has been executed by " << executor.getName() << std::endl;
	}
	else
	{
		this->_random = 0;
		throw _Failure();
	}
}