#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"

class	PresidentialPardon : public AForm
{
	private:
		std::string	_target;
	public:
		PresidentialPardon();
		PresidentialPardon(std::string _target);
		~PresidentialPardon();
		PresidentialPardon(const PresidentialPardon &other);
		void executeAction() const;
};


#endif