#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("based"), _grade(1)
{
	std::cout << "Constructor(Bureaucrat) is called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	std::cout << "Constructor(Bureaucrat) is called" << std::endl;
	if (grade < 1)
		throw _GradeTooHighException();
	if (grade > 150)
		throw  _GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor(Bureaucrat) is called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
	std::cout << "Copy(Bureaucrat) is called" << std::endl;
	*this = src;
}

const char *Bureaucrat::_GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

const char *Bureaucrat::_GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

std::string Bureaucrat::getName() const
{
	return this->_name;
}

int Bureaucrat::getGrade() const
{
	return this->_grade;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & i)
{
	o << i.getName() << ", bureaucrat grade" << i.getGrade();
	return o;
}

void Bureaucrat::incrementGrade()
{
	this->_grade--;
}

void Bureaucrat::decrementGrade()
{
	this->_grade++;
}

void Bureaucrat::signForm(std::string name, bool sign)
{
	if (sign)
		std::cout << this->_name + " signs " + name << std::endl;
	else
		std::cout << this->_name + " cannot signs " + name + " because grade is too low" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
	if (&src != this)
		this->_grade = src._grade;
	return *this;
}

