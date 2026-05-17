#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreation::ShrubberyCreation(std::string cible) : AForm("ShrubberyCreation", 145, 137),  _target(cible)
{
	
}

void	ShrubberyCreation::executeAction(const Bureaucrat &executor) const
{
	if (executor.get_grade() > 137)
	{
		std::cerr << YELLOW << executor.get_name() << " is NOT qualified to execute this Form !" << DEFAULT << std::endl;
		throw (GradeTooLowException());
	}

    std::string filename = _target + "_shrubbery";
    std::ofstream file(filename.c_str());

    if (!file.is_open())
	{
        throw std::runtime_error("Could not open file");
    }

    file << "                                                    ." << std::endl;
	file << "                                    .         ;  " << std::endl;
	file << "             .              .              ;%     ;;   " << std::endl;
	file << "               ,           ,                :;%  %;   " << std::endl;
	file << "                :         ;                   :;%;'     .,   " << std::endl;
	file << "       ,.        %;     %;            ;        %;'    ,;" << std::endl;
	file << "         ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
	file << "          %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
	file << "           ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
	file << "            `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
	file << "             `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
	file << "                `:%;.  :;bd%;          %;@%;'" << std::endl;
	file << "                  `@%:.  :;%.         ;@@%;'   " << std::endl;
	file << "                    `@%.  `;@%.      ;@@%;         " << std::endl;
	file << "                      `@%%. `@%%    ;@@%;        " << std::endl;
	file << "                        ;@%. :@%%  %@@%;       " << std::endl;
	file << "                          %@bd%%%bd%%:;     " << std::endl;
	file << "                            #@%%%%%:;;  " << std::endl;
	file << "                            %@@%%%::;  " << std::endl;
	file << "                            %@@@o%;:(.,'  " << std::endl;
	file << "                               )@@@o%::;  " << std::endl;
	file << "                               %@@(o)::;  " << std::endl;
	file << "                              .%@@@@%::;  " << std::endl;
	file << "                              ;%@@@@%::;  " << std::endl;
	file << "                                 |||  " << std::endl;
	file << "                                 |||  " << std::endl;
	file << "                               ======= " << std::endl;

    file.close();
}

ShrubberyCreation::~ShrubberyCreation()
{
	std::cout << YELLOW << "The ShrubberyCreation at : " << _target << " has been deleted !" << DEFAULT << std::endl;
}

ShrubberyCreation::ShrubberyCreation() : _target("BOB")
{
	std::cerr << BOLDRED << " NO TARGET DUMMY !!!" << DEFAULT << std::endl;
	throw FormError();
}

ShrubberyCreation::ShrubberyCreation(const ShrubberyCreation &other) : AForm(other)
{
	_target = other._target;
	std::cout << "ShrubberyCreation for " << _target << " has been dupped ! " << std::endl;
}