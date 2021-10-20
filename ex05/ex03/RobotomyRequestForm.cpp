#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : 
Form("Robotomy RequestForm", 72, 45), _target(target) {
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
:
	Form("Robotomy RequestForm", 72, 45)
{
	*this = src;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	if (this == &src)
		return (*this);
	_target = src._target;
	return (*this);
}


void				RobotomyRequestForm::robotomized() const {
	srand(time(0));
	if ((rand() % 2))
    {
        std::cout << this->_target;
		throw (RobotomyRequestForm::RobotomizeFailure());
    }
	std::cout << this->_target + " has been robotomized successfully" << std::endl;
}

const char* RobotomyRequestForm::RobotomizeFailure::what() const throw() {
	return(" failed to be robotomized");
}

void				RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	try 
    {
		Form::execute(executor);
    }
    catch(const std::exception &e) {
    	if (executor.getGrade() > this->get_grade_to_exec())
			throw (Form::GradeTooLowException());
		if (!this->getSign())
			throw (Form::SignedException());
    }
	try {
		std::cout << "Drrrrrrrrrrrrrriiiiiiiiiilllllinnnggggg nnnnoooooiiiissseeessss!" << std::endl;
		this->robotomized();
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
		// throw (RobotomyRequestForm::RobotomizeFailure());
	}
}