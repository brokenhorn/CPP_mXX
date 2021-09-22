//
// Created by Voncile Maricruz on 9/17/21.
//

#ifndef CPPM_FORM_HPP
#define CPPM_FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
private:
	const std::string _name;
	bool _isSig;
	const int _gradeSig;
	const int _gradeEx;
public:
	Form();
	~Form();
	Form(std::string name, int sig, int ex);
	Form(Form const & src);

	Form & operator=(Form const &src);

	std::string getName(void);
	bool getIsSig(void);
	int getGradeSig(void);
	int getGradeSigEx(void);

	void beSigned(Bureaucrat  &src);

	class _WrongParams: public std::exception
	{
		virtual const char* what() const throw();
	};
};

std::ostream & operator<<(std::ostream o, Form const & i);

#endif //CPPM_FORM_HPP
