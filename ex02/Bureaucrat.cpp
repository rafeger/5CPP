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
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << GREEN << "Bureaucrat " << _name << ", grade: " << _grade << " has joined the company !" << DEFAULT << std::endl;	
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << GREEN << "Bureaucrat " << _name << ", grade: " << _grade << " has joined the company !" << DEFAULT << std::endl;     
}


void	Bureaucrat::promotion(int n)
{
	if (_grade - n < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade -= n;
	std::cout << CYAN << _name << " has been promoted to grade " << _grade << ". Congratulations !" << DEFAULT << std::endl;
}

//increment the grade (should do + but increment sounds positive so idk)
void	Bureaucrat::demotion(int n)
{
	if (_grade + n > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade += n;
	std::cout << YELLOW << _name << " has been demoted to grade " << _grade << ". Should work harder !" << DEFAULT << std::endl;
}

//we have 2 overload of operator << to make it work with either a pointer or 
// a reference
std::ostream	&operator<<(std::ostream &o, Bureaucrat *B)
{
	o << B->get_name() << ", bureaucrat grade " << B->get_grade() << ".";
	return o;
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat &B)
{
	o << B.get_name() << ", bureaucrat grade " << B.get_grade() << ".";
	return o;
}

//ex01

void	Bureaucrat::signAForm(AForm &form)
{
	AForm.beSigned(*this);
}