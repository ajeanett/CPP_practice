#include "Intern.hpp"

static const std::string names[3] = 
{
    "shrubbery creation", 
    "robotomy request", 
    "presidential pardon"
};

Intern::Intern() {
}

Intern::~Intern() {
}

Intern::Intern(Intern const &src) { *this = src; }

Intern &Intern::operator=(Intern const &src)
{
	if (this == &src)
		return (*this);
	return (*this);
}

const char* Intern::FormNotFound::what() const throw() {
    return ("form not found");
}

Form		*Intern::_PresidentialPardonForm(std::string name) {
    return (new PresidentialPardonForm(name));
}

Form		*Intern::_RobotomyRequestForm(std::string name) {
    return (new RobotomyRequestForm(name));
}

Form		*Intern::_ShrubberyCreationForm(std::string name) {
    return (new ShrubberyCreationForm(name));
}

Form		*Intern::makeForm(std::string form, std::string name) {
        int i = 0;
        while (i < 3)
        {
            if (form == names[i])
                break;
            i++;
        }
        if (i == 3)
        {
            std::cout << "Cannot create " << form << " because ";
            throw (Intern::FormNotFound());
        }
        Form* (Intern::*func[3])(std::string) = {
        &Intern::_ShrubberyCreationForm,
        &Intern::_RobotomyRequestForm,
        &Intern::_PresidentialPardonForm
        };
        std::cout << "Intern creates " << form << std::endl;
        return(this->*func[i])(name);
    return (0);
}