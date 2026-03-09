#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "-----------------try-------------------------" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << std::endl;
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
		std::cout << "---------------------------------------------" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << BOLDRED << e.what() << DEFAULT << std::endl;
	}
	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "-----------------Too low to sign-------------" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << std::endl;
	try
	{
		Bureaucrat	lilbro("neuille", 150);
		Form		IMPORTANT("IMPORTANT", 5, 5);

		lilbro.signForm(IMPORTANT);
		std::cout << "---------------------------------------------" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << BOLDRED << e.what() << DEFAULT << std::endl;
	}
	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "-----------------Grade too low---------------" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << std::endl;
	try 
	{
		Bureaucrat B1;
		Form		F1("dossier", 160, 160);
		std::cout << "---------------------------------------------" << std::endl;

	}
	catch (std::exception &e)
	{
		std::cerr << BOLDRED << e.what() << DEFAULT << std::endl;
	}
	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "-----------------insertion <<----------------" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << std::endl;
	try
	{
		Form	F2("Verstappen", 1, 1);

		std::cout << F2 << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << BOLDRED << e.what() << DEFAULT << std::endl;
	}
	return 1;
}