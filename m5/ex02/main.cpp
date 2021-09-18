#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
int main ( void )
{

	try
	{
		Bureaucrat jack("Jack", 4);
		Bureaucrat ivan("Ivan", 138);
		RobotomyRequestForm form("Tom");
		ShrubberyCreationForm sh("ascii tree");
		form.beSigned(jack);
		form.beSigned(jack);
		form.execute(jack);
		jack.executeForm(sh);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}