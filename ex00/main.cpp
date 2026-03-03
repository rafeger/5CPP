#include "Bureaucrat.hpp"

//kinda bad cuz to use << overload, we need to make a pointer to a Bureaucrat instance
//but try catch restricts the use of pointers to instanciate the Bureaucrats.
//if we made the try catch directly in the class, would have been better imo.
int	main()
{
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "------------------Overload <<----------------" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << std::endl;

	Bureaucrat *B = new	Bureaucrat();
	std::cout << B << std::endl;
	delete	B;

	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "------------------Promo Demo-----------------" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << std::endl;

	try
	{
		Bureaucrat B1("John", 42);
		Bureaucrat B2("Jack", 142);
		std::cout << B1 << std::endl;
		std::cout << B2 << std::endl;
		B1.demotion(100);
		B2.promotion(20);
		std::cout << B1 << std::endl;
		std::cout << B2 << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "-----------------Error Promo-----------------" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << std::endl;

	try
	{
		Bureaucrat B1(1);
		std::cout << B1 << std::endl;
		B1.promotion(5);
		std::cout << B1 << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "-----------------Error Hire -----------------" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << std::endl;

	Bureaucrat *B1 = new Bureaucrat("Jack", 1);
	std::cout << B1 << std::endl;
	try
	{
		B1->promotion(1);
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try 
	{
		B1->demotion(1);
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	delete B1;
	return 1;
}