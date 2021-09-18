#include "Form.hpp"

Form::Form():_name(), _gradeSig(-1), _gradeEx(-1)
{
	throw _WrongParams();
}

const char *Form::_WrongParams::what() const throw()
{
	return "Invalid init";
}

Form::Form(std::string name, int sig, int ex): _name(name), _isSig(false), _gradeSig(sig), _gradeEx(ex)
{
	std::cout << "Constructor(Form) is called" << std::endl;
	if (this->_gradeEx > 150 || this->_gradeSig > 150)
		throw Bureaucrat::_GradeTooLowException();
	if (this->_gradeEx < 1 || this->_gradeSig < 1)
		throw Bureaucrat::_GradeTooHighException();
}

Form::~Form()
{
	std::cout << "Destructor(Form) is called" << std::endl;
}
Form::Form(const Form &src):  _gradeSig(src._gradeSig), _gradeEx(src._gradeEx)
{
	std::cout << "Copy(Form) is called" << std::endl;
	*this = src;
}

Form &Form::operator=(const Form &src)
{
	if (&src != this)
		std::cout << "Cannot make assigmet of Forms";
	return *this;
}

std::string Form::getName()
{
	return this->_name;
}

int Form::getGradeSig()
{
	return this->_gradeSig;
}

int Form::getGradeSigEx()
{
	return this->_gradeEx;
}

void Form::beSigned(Bureaucrat &src)
{
	if (src.getGrade() <= this->getGradeSig())
	{
		this->_isSig = true;
		src.signForm(this->getName(), this->_isSig);
	}
	else
	{
		src.signForm(this->getName(), false);
		throw Bureaucrat::_GradeTooLowException();
	}
}

