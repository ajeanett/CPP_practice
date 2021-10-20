#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class                           PresidentialPardonForm : public Form 
{
private:
    std::string			_target;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string const & target);
	virtual ~PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm &copy);
	PresidentialPardonForm &operator=(PresidentialPardonForm const &assign);
	virtual void		execute(Bureaucrat const &executor) const;
};

#endif