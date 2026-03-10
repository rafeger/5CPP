#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("JohnForm"), _sign(false), _sign_grade(150), _exec_grade(150)
{
	std::cout << GREEN << "Default form has been created !" << DEFAULT << std::endl;
}


AForm::~AForm()
{
	std::cout << BOLDRED << "AForm " << _name << " shredded to pieces." << DEFAULT << std::endl;
}

AForm::AForm(const AForm &other) : _name(other._name), _sign(false), _sign_grade(other._sign_grade), _exec_grade(other._exec_grade)
{
	if (_sign_grade > 150 || _exec_grade > 150)
		throw GradeTooLowException();
	if (_sign_grade < 1 || _exec_grade < 1)
		throw GradeTooHighException();
	std::cout << GREEN << "The form " << other._name << " has been duplicated." << DEFAULT << std::endl;
}

//i tried having a copy constructor call another constructor but its only available in c++11
// AForm::AForm(const AForm &other) : AForm(other._name, other._sign_grade, other._exec_grade)
// {
// 	std::cout << GREEN << "AForm " << other._name << " has been duplicated." << DEFAULT << std::endl;
// }


//we could build a checker ahead of constructor to safeguard wrong values,
//but I believe it is better to keep it all in the constructor, to avoid 
//forgetting the safeguard function call beforehand in main or elsewhere we
//are initializing an instance of AForm

AForm::AForm(std::string name, const int sign_grade, const int exec_grade) : _name(name), _sign(false), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	if (name.length() > 50)
		throw FormError();
	if (_sign_grade > 150 || _exec_grade > 150)
		throw GradeTooLowException();
	if (_sign_grade < 1 || _exec_grade < 1)
		throw GradeTooHighException();
	std::cout << GREEN << "Complete form <" << CYAN << _name << GREEN << "> has been created !" << DEFAULT << std::endl;
	return ;
}

//beSigned (need to throw out errors to catch in main)
void	AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (_sign == true)
	{
		std::cout << "This form is already signed dummy !" << std::endl;
		return ;
	}
	if (bureaucrat.get_grade() > _sign_grade)
	{
		std::cout << bureaucrat.get_name() << " couldnt sign " << _name << " because he is too low elo !" << std::endl;
		return ;
	}
	std::cout << GREEN << bureaucrat.get_name() << " has signed form : " << _name << DEFAULT << std::endl;
	_sign = true;
	return ;
}


// void	AForm::beExecuted(Bureaucrat &bureaucrat)
// {

// }

std::string	AForm::get_info()
{
	std::cout << "Name of the form: " << _name << std::endl;
	std::cout << "Required grade to sign: " << _sign_grade << std::endl;
	std::cout << "Required grade to exec: " << _exec_grade << std::endl;
	std::cout << "Status: " << _sign;
	return "";
}

std::ostream	&operator<<(std::ostream &o, AForm	*form)
{
	o << form->get_info() << std::endl;
	return (o);
}


std::ostream	&operator<<(std::ostream &o, AForm	&form)
{
	o << form.get_info() << std::endl;
	return (o);
}


//test for advanced error throws

// AForm::FormError::FormError(char *str)
// {
// 	_message = str;
// 	return ;
// }