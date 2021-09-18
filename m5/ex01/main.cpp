#include "Bureaucrat.hpp"
#include "Form.hpp"
int main ( void )
{

		Bureaucrat tom("Tom", 1);
		Bureaucrat ivan("Ivan", 7);
		Form form("Intra", 4, 4);
		try
		{
			form.beSigned(tom);
			form.beSigned(ivan);
		}
		catch(std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
		return 0;
}