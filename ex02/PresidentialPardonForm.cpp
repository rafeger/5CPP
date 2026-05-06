#include "PresidentialPardonForm.hpp"

PresidentialPardon::PresidentialPardon() : _target("Bob")
{
	throw FormError();
}

PresidentialPardon::PresidentialPardon(std::string _name) : _target(_name)
{
	std::cout << GREEN << "Presidential Pardon for" << _name << "Has been drafted." << DEFAULT << std::endl;
}

PresidentialPardon::~PresidentialPardon()
{

}

PresidentialPardon::PresidentialPardon(const PresidentialPardon &other)
{

}

void PresidentialPardon::executeAction(const Bureaucrat &executor) const
{
	if (executor.get_grade() > 5)
	{
		std::cerr << YELLOW << executor.get_name() << " is NOT qualified to execute this Form !" << DEFAULT << std::endl;
		throw (GradeTooLowException());
	}
	std::cout << GREEN << _target << " has been pardonned by Zaphod Beeblebrox." << DEFAULT << std::endl;
}