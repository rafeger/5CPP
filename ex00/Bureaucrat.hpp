#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iomanip>
# include <iostream>

# define BOLDWHITE "\e[1;37m"
# define BOLDRED "\e[1;91m"
# define DEFAULT "\x1b[0m"
# define GREEN "\e[0;32m"

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
		int	get_grade() const;
	//setters
		void	grade_plus(const Bureaucrat &B);
		void	grade_minus(const Bureaucrat &B);
};

#endif