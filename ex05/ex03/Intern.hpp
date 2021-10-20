#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Form.hpp"

class			Intern {
private:
	Form		*_PresidentialPardonForm(std::string);
	Form		*_RobotomyRequestForm(std::string);
	Form		*_ShrubberyCreationForm(std::string);
public:
	Intern();
	~Intern();
    Intern(Intern const &copy);
	Intern &operator=(Intern const &assign);
	Form		*makeForm(std::string, std::string);
	class		FormNotFound : public std::exception {
	public:
		virtual const char* what() const throw();
	};
};

#endif