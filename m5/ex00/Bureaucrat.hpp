#ifndef CPPM_BUREAUCRAT_HPP
#define CPPM_BUREAUCRAT_HPP


#include <string>
#include <iostream>
#include "fstream"
#include <iomanip>

class Bureaucrat
{
private:
	std::string const _name;
	int 			_grade;

//	void _GradeTooHighException( void );
//	void _GradeTooLowException( void );


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

	class _GradeTooHighException: public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
	class _GradeTooLowException: public std::exception
	{
		virtual const char* what() const throw();
	};

};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & i);


#endif //CPPM_BUREAUCRAT_HPP
