#include "Form.hpp"

std::string	Form::get_info()
{
	std::cout << "Name of the form: " << _name << std::endl;
	std::cout << "Required grade to sign: " << _sign_grade << std::endl;
	std::cout << "Required grade to exec: " << _exec_grade << std::endl;
	std::cout << "Status: " << _signed;
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