/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:46:44 by ngastana          #+#    #+#             */
/*   Updated: 2025/04/10 12:25:42 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"


Form::Form(void): _name("Default"), _gradeToSign(149), _gradeToExecute(130), _signed(false) {
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute): _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _signed(false) {
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
}

Form::~Form(void) {
}

Form::Form(const Form& copy): _name(copy._name),
	  _gradeToSign(copy._gradeToSign),
	  _gradeToExecute(copy._gradeToExecute),
	  _signed(copy._signed)
{

}

Form& Form::operator=(const Form& other) {
	if (this != &other) {
		this->_signed = other._signed;
	}
	return *this;
}


std::string	Form::getName() const
{
    return this->_name;
}

int Form::getGradeToExecute(void) const
{
    return this->_gradeToExecute;
}

int Form::getGradeToSign(void) const
{
    return this->_gradeToSign;
}


std::ostream& operator<<(std::ostream& out, const Form& form)
{
	out << "Form \"" << form.getName() << "\""
		<< CYAN " [Sign grade: " << form.getGradeToSign()
		 << ", Execute grade: " << form.getGradeToExecute()
		 << ", Signed: " << (form.isSigned() ? "yes" : "no")
		<< "]" RESET;
	return out;
}

const char *Form::GradeTooHighException::what(void) const throw()
{
    return  RED "Grade is too high" RESET;
}

const char *Form::GradeTooLowException::what(void) const throw()
{
    return  RED "Grade is too low" RESET;
}

bool Form::isSigned(void) const
{
    return _signed;
}

void Form::beSigned(const Bureaucrat& b)
{
    if (b.getGrade() > this->getGradeToSign())
        throw GradeTooLowException();
    _signed = true;
}
