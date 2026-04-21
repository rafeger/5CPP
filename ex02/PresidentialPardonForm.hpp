#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class	PresidentialPardon : public AForm
{
	private:
		void		execute(Bureaucrat const &executor);
	public:
		PresidentialPardon();
		~PresidentialPardon();
		PresidentialPardon(const PresidentialPardon &other);
		
};


#endif