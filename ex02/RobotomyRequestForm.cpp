#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string cible) : _target(cible), _result(Trigger())
{
	std::cout << GREEN << "Robotomy request for " << _target << " created !" << DEFAULT << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm() : _target("Bob")
{
	std::cerr << BOLDRED << " NO TARGET DUMMY !!!" << DEFAULT << std::endl;
	throw FormError();
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << YELLOW << "This form : \"RobotomyRequestForm\" with the target : \"" << _target << "\" has been deleted ! " << DEFAULT << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other)
{
	_target = other._target;
	std::cout << "RobotomyRequest for " << _target << " has been dupped ! " << std::endl;
}

void RobotomyRequestForm::executeAction(const Bureaucrat &executor) const
{
	if (executor.get_grade() > 45)
	{
		std::cerr << YELLOW << executor.get_name() << " is NOT qualified to execute this Form !" << DEFAULT << std::endl;
		throw (GradeTooLowException());
	}
	std::cout << CYAN << "DRWWWWWZZZZZZZZZZZZFVRVVVVVVVVVVVVRRRRRRRRRRRRRRRR" << DEFAULT << std::endl;
	if (!_result)
	{
		std::cout <<  YELLOW << "Robotomy on " << _target << " wasnt successful !" << DEFAULT << std::endl;
	}
	else
	{
		std::cout <<  CYAN << "Robotomy on " << _target << " was successful !" << DEFAULT << std::endl;
	}
}

bool RobotomyRequestForm::Trigger()
{
	static bool seeded = false;
    if (!seeded) {
        std::srand(std::time(0));
        seeded = true;
    }
	return ((std::rand() % 2 ) == 0);
}