#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() :  _name("Joe"), _grade(150)
{
	std::cout << GREEN << "Lowest grade default Bureaucrat Joe has been recruited" << DEFAULT << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << BOLDRED << "Bureaucrat " << _name <<" grade: " << _grade << " has been FIRED." << DEFAULT << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	*this = other;
	std::cout << GREEN << _name << " has recruited his twin ! They have the same rank and for an obscure reason (nepotism) the same rank !" << DEFAULT << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	_name = other.get_name();
	_grade = other.get_grade();
	return (*this);
}

std::string Bureaucrat::get_name() const
{
	return (_name);
}

int	Bureaucrat::get_grade() const
{
	return (_grade);
}

Bureaucrat::Bureaucrat(std::string name) : _name(name), _grade(150)
{
	std::cout << GREEN << "Bureaucrat " << _name << ", grade: " << _grade << " has joined the company !" << DEFAULT << std::endl;
}

Bureaucrat::Bureaucrat(int grade) : _name("Joe"), _grade(grade)
{
	std::cout << GREEN << "Bureaucrat " << _name << ", grade: " << _grade << " has joined the company !" << DEFAULT << std::endl;	
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << GREEN << "Bureaucrat " << _name << ", grade: " << _grade << " has joined the company !" << DEFAULT << std::endl;     
}