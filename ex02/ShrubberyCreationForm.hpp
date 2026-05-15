#pragma once

# include "AForm.hpp"

class ShrubberyCreation : public AForm
{
	private : 
		std::string _target;

	public :
	//canonical form
		ShrubberyCreation(std::string cible);
		~ShrubberyCreation();
		ShrubberyCreation(const ShrubberyCreation &other);
		ShrubberyCreation &operator=(const ShrubberyCreation &other);
};