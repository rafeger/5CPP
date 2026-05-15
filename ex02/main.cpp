#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
// #include "RobotomyRequestForm.hpp"
// #include "ShrubberyCreationForm.hpp"



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

		Boss.signAForm(B);
		B.execute(Boss);

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

		Chirurgien.signAForm(B);
		B.execute(Chirurgien);

		Bureaucrat			SousFifre("Intern", 150);
		B.execute(SousFifre);
	}
	catch(const std::exception& e)
	{
		std::cerr << BOLDRED << e.what() << DEFAULT << std::endl;
	}
	
}