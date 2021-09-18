#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):Form("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "Constructor(PresidentialPardonForm) is called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor(PresidentialPardonForm) is called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
{
	std::cout << "Copy(PresidentialPardonForm) is called" << std::endl;
	*this = src;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(__unused const PresidentialPardonForm &src)
{
	return *this;
}

std::string PresidentialPardonForm::getTarget()
{
	return this->_target;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor)
{
	if (this->getIsSig() == false)
		throw Form::_FormUnsigned();
	if (this->getGradeSigEx() < executor.getGrade())
		throw  Bureaucrat::_GradeTooLowException();

	std::cout << this->_target << "has been pardoned by Zafod Beeblebrox" << std::endl;
	std::cout << "Form " << this->getName() << " has been executed by " << executor.getName() << std::endl;
}