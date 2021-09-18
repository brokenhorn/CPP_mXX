#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137),_target(target)
{
	std::cout << "Constructor(ShrubberyCreationForm) is called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Destructor(ShrubberyCreationForm) is called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
{
	std::cout << "Copy(ShrubberyCreationForm) is called" << std::endl;
	*this = src;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(__unused const ShrubberyCreationForm &src)
{
	return *this;
}

std::string ShrubberyCreationForm::getTarget()
{
	return this->_target;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor)
{
	if (this->getIsSig() == false)
		throw Form::_FormUnsigned();
	if (this->getGradeSigEx() < executor.getGrade())
		throw  Bureaucrat::_GradeTooLowException();

	std::ofstream output;
	const std::string	name = this->_target + "_shrubbery";
	output.open(name.data(), std::ofstream::trunc | std::ofstream::out);
	output << "           ^^^^^^^            _  _" << std::endl;
	output << "  .       <\\\\/%\\       .   /%\\/%\\     ." << std::endl;
	output << "      __.<\\\\%#//\\,_       <%%#/%%\\,__  ." << std::endl;
	output << ".    <%#/|\\\\%%%#///\\    /^%#%%\\///%#\\\\" << std::endl;
	output << "      \"\"/%/\"\"\\ \\\"\"//|   |/\"\"\'/ /\\//\"//'" << std::endl;
	output << " .     L/'`   \\ \\  `    \"   / /  ```" << std::endl;
	output << "        `      \\ \\     .   / /       ." << std::endl;
	output << " .       .      \\ \\       / /  ." << std::endl;
	output << "        .        \\ \\     / /          ." << std::endl;
	output << "   .      .    ..:\\ \\:::/ /:.     .     ." << std::endl;
	output << "______________/ \\__;\\___/\\;_/\\________________________________" << std::endl;
	output << "YwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYw" << std::endl;
	output.close();
	std::cout << "Form " << this->getName() << " has been executed by " << executor.getName() << std::endl;
}