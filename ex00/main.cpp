#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat	B0;
	Bureaucrat	B1("Jack");
	Bureaucrat	B2("John", 15);
	Bureaucrat 	B3(B2); 

	std::string word = "four";
	try
	{
		std::cout << word.at(4) << std::endl;
	}
	catch (std::out_of_range &e)
	{
		std::cout << "error: " << e.what() << std::endl;
	}
}