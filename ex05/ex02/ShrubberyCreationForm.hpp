#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>
# include <sstream>

class                   ShrubberyCreationForm : public Form {
private:
    std::string	_target;
public:
	ShrubberyCreationForm(std::string const & target);
	virtual ~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &src);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &src);
	virtual void		execute(Bureaucrat const &b) const;
};

#endif