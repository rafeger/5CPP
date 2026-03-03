#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string 	_name;
		bool				_signed = 0;
		const	int			_sign_grade;
		const	int			_exec_grade;
	public:



		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return "Error: Grade too high !";
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return "Error: Grade too low !";
				}
		};
};


#endif