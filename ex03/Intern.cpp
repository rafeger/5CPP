#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &other)
{
	(void) other;
}

Intern::~Intern()
{

}

Intern &Intern::operator=(const Intern &other)
{
	(void) other;
	return (*this);
}

AForm	*Intern::makeForm(std::string formname, std::string _target)
{
	int i = 0;
	std::string available_forms[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};

	while (i < 3 && formname != available_forms[i])
		i++;
	
	switch (i)
	{
	case 0:
		std::cout << "Intern creates " << formname << std::endl;
		return (new ShrubberyCreation(_target));
	case 1:
		std::cout << "Intern creates " << formname << std::endl;
		return (new RobotomyRequestForm(_target));
	case 2:
		std::cout << "Intern creates " << formname << std::endl;
		return (new PresidentialPardon (_target));
	default:
		std::cout << "Form is not existing" << std::endl;
		return NULL;
	}
}
