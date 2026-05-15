#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include <cstdlib>
# include <ctime>

class RobotomyRequestForm : public AForm
{
	private :
		std::string _target;
		bool	Trigger();
		bool	_result;
	public:
	//canonical form

		RobotomyRequestForm();
		RobotomyRequestForm(std::string cible);
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &other);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
		void executeAction(const Bureaucrat &executor) const;
};

#endif
