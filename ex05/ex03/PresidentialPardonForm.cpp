#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : 
Form("Presidential PardonForm", 25, 5), _target(target) {
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

void		PresidentialPardonForm::execute(Bureaucrat const &bur) const 
{
	Form::execute(bur);
    std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
:
	Form("Presidential PardonForm", 25, 5)
{ 
    *this = src; 
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
	if (this == &src)
		return (*this);
	_target = src._target;
	return (*this);
}
