#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iomanip>
# include <iostream>
# include "Form.hpp"

# define BOLDWHITE "\e[1;37m"
# define BOLDRED "\e[1;91m"
# define DEFAULT "\x1b[0m"
# define GREEN "\e[0;32m"
# define YELLOW "\e[0;33m"
# define CYAN 	"\e[0;36m"

class Bureaucrat
{
    private:
        std::string			_name;
        int					_grade;

	public:
	//cannonical form	
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat &operator=(const Bureaucrat &other);


		Bureaucrat(std::string name);
		Bureaucrat(int	grade);
		Bureaucrat(std::string name, int grade);
	//getters
		std::string	get_name() const;
		int			get_grade() const;
	//member functions
		void	promotion(int n);
		void	demotion(int n);

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

		void	signForm(Form &form); 
};


std::ostream	&operator<<(std::ostream &o, Bureaucrat *B);

std::ostream	&operator<<(std::ostream &o, Bureaucrat &B);


#endif
