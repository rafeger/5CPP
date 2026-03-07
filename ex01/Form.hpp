#ifndef FORM_HPP
# define FORM_HPP

# include <iomanip>
# include <iostream>



# define BOLDWHITE "\e[1;37m"
# define BOLDRED "\e[1;91m"
# define DEFAULT "\x1b[0m"
# define GREEN "\e[0;32m"
# define YELLOW "\e[0;33m"
# define CYAN 	"\e[0;36m"

class	Bureaucrat;

//we cant do _sign = 0 cuz its a c++11 thing
class Form
{
	private:
		const std::string 	_name;
		bool				_sign;
		const	int			_sign_grade;
		const	int			_exec_grade;
	public:
		Form();
		~Form();
		Form(std::string	name, const int sign_grade, const int exec_grade);
		Form(const Form &other);

		Form	&operator=(const Form &other);

		//getters
		std::string	get_info();

		//setters
		//im dumb we cant have setter cuz its all const

		//methods
		void	beSigned(Bureaucrat &bureaucrat);

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
			public:
				const char *what() const throw()
				{
					return ("error: FormError, name too long !");
				}
			};
};

std::ostream	&operator<<(std::ostream &o, Form	*form);

std::ostream	&operator<<(std::ostream &o, Form	&form);

//tried to do a more avanced error class method and shit but im lowkey buns
		// class	FormError : public std::exception
		// {			
		// 	public:
		// 		const char	*what() const throw()
		// 		{
		// 			if (!_message)
		// 				return ("error: FormError !");
		// 			return (_message);
		// 		}
		// 		FormError(char *str);
		// 	private:
		// 		char *_message;
		// };


#endif