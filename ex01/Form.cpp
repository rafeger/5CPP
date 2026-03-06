#include "Form.hpp"

Form::Form() : _name("JohnForm"), _sign_grade(150), _exec_grade(150)
{
	std::cout << GREEN << "Default form has been created !" << DEFAULT << std::endl;
}


Form::~Form()
{

}

//we could build a checker ahead of constructor to safeguard wrong values,
//but I believe it is better to keep it all in the constructor, to avoid 
//forgetting the safeguard function call beforehand in main or elsewhere we
//are initializing an instance of Form

Form::Form(std::string name, const int sign_grade, const int exec_grade) : _name(name), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	if (name.length() < 50)
	{
		throw FormError("Form Name non-conform to Naming rules !");
	}

	std::cout << GREEN << "Complete form has been created !" << DEFAULT << std::endl;
	return ;
}

//beSigned (need to throw out errors to catch in main)


std::string	Form::get_info()
{
	std::cout << "Name of the form: " << _name << std::endl;
	std::cout << "Required grade to sign: " << _sign_grade << std::endl;
	std::cout << "Required grade to exec: " << _exec_grade << std::endl;
	std::cout << "Status: " << _sign;
	return "";
}

std::ostream	&operator<<(std::ostream &o, Form	*form)
{
	o << form->get_info() << std::endl;
	return (o);
}


std::ostream	&operator<<(std::ostream &o, Form	&form)
{
	o << form.get_info() << std::endl;
	return (o);
}


//test for advanced error throws

Form::FormError::FormError(char *str)
{
	_message = str;
	return ;
}