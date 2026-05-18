#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"



//ne pas oublier de try/catch pour eviter les leaks ! 

//si un err exception nest pas gere explicitement, vu quon la mis dans la classe
//exception, ca terminate tout de meme le process et on a des leaks ! (destructor pas called)

//fix signAform
int	main()
{
	//tests for presidential Pardon
	// AForm *f = new PresidentialPardon("Sarkozy");

	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "-----------------try Presidential Pardon-------------------------" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << std::endl;
	try
	{
		PresidentialPardon B("Snowden");
		Bureaucrat			Boss("Chad", 1);

		B.get_info();

		Boss.signAForm(B);
		B.get_info();
		B.execute(Boss);
		

		PresidentialPardon B2(B);
		B2.get_info();
		B2.execute(Boss);

		Bureaucrat			SousFifre("Loser", 150);
		B.execute(SousFifre);
	}
	catch (std::exception &e)
	{
		std::cerr << BOLDRED << e.what() << DEFAULT << std::endl;
	}
	try
	{
		PresidentialPardon Blank;
	}
	catch (std::exception &e)
	{
		std::cerr << BOLDRED << e.what() << DEFAULT << std::endl;
	}
	

	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "-----------------try Robotomy-------------------------" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << std::endl;
	try
	{
		RobotomyRequestForm	B("gros neuille");
		Bureaucrat			Chirurgien("John", 1);

		B.get_info();
		Chirurgien.signAForm(B);
		B.execute(Chirurgien);

		Bureaucrat			SousFifre("Intern", 150);
		B.execute(SousFifre);
	}
	catch(const std::exception& e)
	{
		std::cerr << BOLDRED << e.what() << DEFAULT << std::endl;
	}
	

	try
	{
		RobotomyRequestForm	B("gros neuille");
		Bureaucrat			Chirurgien("John", 1);

		// Chirurgien.signAForm(B);
		B.execute(Chirurgien);

	}
	catch(const std::exception& e)
	{
		std::cerr << BOLDRED << e.what() << DEFAULT << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "-----------------try Shrubberytree-------------------------" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << std::endl;

	try
	{
		ShrubberyCreation	B("gros neuille");
		Bureaucrat			Chirurgien("John", 1);

		B.get_info();
		Chirurgien.signAForm(B);
		B.execute(Chirurgien);

		Bureaucrat			SousFifre("Intern", 150);
		B.execute(SousFifre);
	}
	catch(const std::exception &e)
	{
		std::cerr << BOLDRED << e.what() << DEFAULT << std::endl;
	}

}