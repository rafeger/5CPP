#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string 	_name;
		bool				_sign = 0;
		const	int			_sign_grade;
		const	int			_exec_grade;
	public:
		Form();
		~Form();
		Form(std::string	name, const int sign_grade, const int exec_grade);
		Form(const Form &other);

		//getters
		std::string	get_info();

		//setters
		//im dumb we cant have setter cuz its all const

		//methods
		void	beSigned();

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

		class	FormError : public std::exception
		{
			private:
				char *_message;
			public:
				const char	*what() const throw()
				{
					if (!_message)
						return ("error: FormError !");
					return (_message);
				}
				FormError(char *str);
				
		};
};

std::ostream	&operator<<(std::ostream &o, Form	*form);

std::ostream	&operator<<(std::ostream &o, Form	&form);


#endif