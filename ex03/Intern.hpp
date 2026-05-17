#pragma once

# include "AForm.hpp"

# include <iostream>
# include <string>
# include <exception>

class	Intern
{
	public:

	//canon
	Intern();
	Intern(const Intern &other);
	~Intern();
	Intern &operator=(const Intern &other);

	AForm	*makeForm(std::string formname, std::string _target);
};

