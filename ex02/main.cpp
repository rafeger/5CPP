#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


//fix signAform
int	main()
{
	AForm *f = new PresidentialPardon("Sarkozy");
	PresidentialPardon B("Petain");
	Bureaucrat			Boss("Chad", 1);

	Boss.signAForm(B);
	B.execute(Boss);
}