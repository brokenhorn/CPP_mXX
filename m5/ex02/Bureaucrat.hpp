#ifndef CPPM_BUREAUCRAT_HPP
#define CPPM_BUREAUCRAT_HPP


#include <string>
#include <iostream>
#include "fstream"
#include <iomanip>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	std::string const _name;
	int 			_grade;

public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat(Bureaucrat const & src);

	Bureaucrat & operator=(Bureaucrat const & src);


	std::string getName() const;
	int getGrade() const;

	void incrementGrade();
	void decrementGrade();

	void signForm(std::string name, bool sign);



	class _GradeTooHighException: public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
	class _GradeTooLowException: public std::exception
	{
		virtual const char* what() const throw();
	};

	void executeForm(Form const &form);
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & i);


#endif //CPPM_BUREAUCRAT_HPP
