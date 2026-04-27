#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

int	main()
{
	PresidentialPardon	P();
	Bureaucrat			Boss("Chad", 1);

	Boss.signForm(P);
	P.execute(Boss);
}