/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:40:32 by ngastana          #+#    #+#             */
/*   Updated: 2025/04/10 21:16:18 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): _target("Default") {
//srand(time(NULL))
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
	: AForm("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy)
	: AForm(copy), _target(copy._target) {}


PresidentialPardonForm::~PresidentialPardonForm(void) {
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
	if (this != &other)
	{
		// Don't assign _target if it's const!
		// Only assign other mutable members here, if any.
	}
	return *this;
}

std::ostream& operator<<(std::ostream& out, const PresidentialPardonForm& form) {
	out << "Form \"" << form.getName()
		<< CYAN " [Sign grade: " << form.getGradeToSign()
		 << ", Execute grade: " << form.getGradeToExecute()
		 << ", Signed: " << (form.isSigned() ? "yes" : "no")
		<< "]" RESET;
	return out;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (!this->isSigned())
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
    std::cout << BLUE << this->_target << " has been pardoned by Zaphod Beeblebrox." << RESET << std::endl;
}
