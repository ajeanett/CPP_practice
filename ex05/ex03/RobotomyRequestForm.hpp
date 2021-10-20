#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <cstdlib>
# include <ctime>

class               RobotomyRequestForm : public Form {
private:
	std::string			_target;
	void				robotomized() const;
public:
	RobotomyRequestForm(std::string const & target);
	virtual ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &src);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &src);
	virtual void		execute(Bureaucrat const &executor) const;
	class		RobotomizeFailure : public std::exception {
	public:
		virtual const char* what() const throw();
	};
};

#endif