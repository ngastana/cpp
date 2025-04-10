/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:39:53 by ngastana          #+#    #+#             */
/*   Updated: 2025/04/10 22:28:27 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <cstdlib>  // for rand()
#include <ctime>    // for time()

RobotomyRequestForm::RobotomyRequestForm(void): AForm("Bender 🤖", 72, 45), _target("Default") {
//    srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
	: AForm("Bender 🤖", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy)
	: AForm(copy), _target(copy._target) {}


RobotomyRequestForm::~RobotomyRequestForm(void) {
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
	if (this != &other)
	{
		// Don't assign _target if it's const!
		// Only assign other mutable members here, if any.
	}
	return *this;
}

std::ostream& operator<<(std::ostream& out, const RobotomyRequestForm& form) {
	out << "Form \"" << form.getName()
		<< CYAN " [Sign grade: " << form.getGradeToSign()
		 << ", Execute grade: " << form.getGradeToExecute()
		 << ", Signed: " << (form.isSigned() ? "yes" : "no")
		<< "]" RESET;
	return out;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!this->isSigned())
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	std::cout << "BZZZZZT... 🛠️ drilling noises..." << std::endl;
	if (rand() % 2)
		std::cout << GREEN << _target << " has been robotomized successfully!" << RESET << std::endl;
	else
		std::cout << RED "The robotomy failed." RESET << std::endl;   
}
