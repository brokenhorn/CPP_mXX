//
// Created by Voncile Maricruz on 9/17/21.
//

#ifndef CPPM_FORM_HPP
#define CPPM_FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	std::string _name;
	bool _isSig;
	const int _gradeSig;
	const int _gradeEx;
public:
	Form();
	~Form();
	Form(std::string name, int sig, int ex);
	Form(Form const & src);

	Form & operator=(Form const &src);

	std::string getName(void) const;
	int getGradeSig(void) const;
	int getGradeSigEx(void) const;
	bool getIsSig() const;

	void beSigned(Bureaucrat   &src);

	virtual void execute(Bureaucrat const & executor) = 0;



	class _WrongParams: public std::exception
	{
		virtual const char* what() const throw();
	};

	class _FormUnsigned: public std::exception
	{
		virtual const char* what() const throw();
	};
};

std::ostream & operator<<(std::ostream o, Form const & i);

#endif //CPPM_FORM_HPP
