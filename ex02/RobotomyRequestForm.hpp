#pragma once

# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private :
		std::string _target;
	public:
	//canonical form

		RobotomyRequestForm(std::string cible);
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &other);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
};

