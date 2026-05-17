#pragma once

# include "AForm.hpp"
# include "Bureaucrat.hpp"

class ShrubberyCreation : public AForm
{
	private : 
		std::string _target;

	public :
	//canonical form
		ShrubberyCreation();
		ShrubberyCreation(std::string cible);
		~ShrubberyCreation();
		ShrubberyCreation(const ShrubberyCreation &other);
		ShrubberyCreation &operator=(const ShrubberyCreation &other);
		void	executeAction(const Bureaucrat &executor) const;
};