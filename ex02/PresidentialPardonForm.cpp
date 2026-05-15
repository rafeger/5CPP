#include "PresidentialPardonForm.hpp"

PresidentialPardon::PresidentialPardon() : _target("Bob")
{
	std::cerr << BOLDRED << "No target specified !!!!!" << DEFAULT << std::endl;
	throw FormError();
}

PresidentialPardon::PresidentialPardon(std::string _name) : _target(_name)
{
	std::cout << GREEN << "Presidential Pardon for " << _name << " has been drafted." << DEFAULT << std::endl;
}

PresidentialPardon::~PresidentialPardon()
{
	std::cout << YELLOW << "This form : \"Presidential Pardon\" with the target : \"" << _target << "\" has been deleted ! " << DEFAULT << std::endl;
}

PresidentialPardon::PresidentialPardon(const PresidentialPardon &other) : AForm(other)
{

	_target = other._target;
	std::cout << "Presidential Pardon for " << _target << " has been dupped ! " << std::endl;
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

