#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat B1("John", 150);
		Bureaucrat BOSS("ROTSHILD", 1);

		Form	lilForm("contrat mcdo", 150, 150);
		Form 	GIGAFORM("CEO BLACKROCK", 1, 1);

		B1.signForm(lilForm);
		BOSS.signForm(lilForm);

		BOSS.signForm(GIGAFORM);
		B1.signForm(GIGAFORM);
	}
	catch(std::exception &e)
	{
		std::cerr << BOLDRED << e.what() << DEFAULT << std::endl;
	}
	return 1;
}