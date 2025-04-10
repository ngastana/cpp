/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:51:30 by ngastana          #+#    #+#             */
/*   Updated: 2025/04/10 21:18:33 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(void): _name("Default"), _gradeToSign(149), _gradeToExecute(130), _signed(false) {
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute): _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _signed(false) {
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
}

AForm::~AForm(void) {
}

AForm::AForm(const AForm& copy): _name(copy._name),
	  _gradeToSign(copy._gradeToSign),
	  _gradeToExecute(copy._gradeToExecute),
	  _signed(copy._signed){
}

AForm& AForm::operator=(const AForm& other) {
	if (this != &other) {
		this->_signed = other._signed;
	}
	return *this;
}


std::string	AForm::getName() const
{
    return this->_name;
}

int AForm::getGradeToExecute(void) const
{
    return this->_gradeToExecute;
}

int AForm::getGradeToSign(void) const
{
    return this->_gradeToSign;
}


std::ostream& operator<<(std::ostream& out, const AForm& form)
{
	out << "Form \"" << form.getName() << "\""
		<< CYAN " [Sign grade: " << form.getGradeToSign()
		 << ", Execute grade: " << form.getGradeToExecute()
		 << ", Signed: " << (form.isSigned() ? "yes" : "no")
		<< "]" RESET;
	return out;
}

const char *AForm::GradeTooHighException::what(void) const throw()
{
    return  RED "grade is too high" RESET;
}

const char *AForm::GradeTooLowException::what(void) const throw()
{
    return  RED "grade is too low" RESET;
}

const char *AForm::FormNotSignedException::what(void) const throw()
{
    return  RED "form is not signed" RESET;
}

bool AForm::isSigned(void) const
{
    return _signed;
}

void AForm::beSigned(const Bureaucrat& b)
{
    if (b.getGrade() > this->getGradeToSign())
        throw GradeTooLowException();
    _signed = true;
}
