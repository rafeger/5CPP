#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"


//ne pas oublier de try/catch pour eviter les leaks ! 

//si un err exception nest pas gere explicitement, vu quon la mis dans la classe
//exception, ca terminate tout de meme le process et on a des leaks ! (destructor pas called)

//fix signAform
int	main()
{
	try
	{
		
	}
	catch(const std::exception& e)
	{
		std::cerr << BOLDRED << e.what() << DEFAULT << std::endl;
	}
	
}