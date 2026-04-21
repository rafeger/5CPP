#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

int	main()
{
	PresidentialPardon	P();
	Bureaucrat			Boss("Chad", 1);

	Boss.signForm(P);
	P.execute(Boss);
}