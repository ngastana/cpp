/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:38:48 by ngastana          #+#    #+#             */
/*   Updated: 2025/04/10 12:31:55 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name("NEREABOSS"), _grade(1) {
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name) {
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    _grade = grade;
}

Bureaucrat::~Bureaucrat(void) {
}

Bureaucrat :: Bureaucrat (const Bureaucrat& copy)
{
    *this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
    if (this != &other) {
        this->_grade = other._grade;
    }
    return *this;
}

std::string	Bureaucrat::getName() const
{
    return this->_name;
}

int Bureaucrat::getGrade(void) const
{
    return this->_grade;
}

void Bureaucrat::incrementGrade(void)
{
    if (_grade <= 1)
        throw GradeTooHighException();
    this->_grade -= 1;
}

void Bureaucrat::decrementGrade(void)
{
    if (_grade >= 150)
        throw GradeTooLowException();
    this->_grade += 1;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &Bureaucrat)
{
	out << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade() << ".";
	return out;
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return  RED "Grade is too high" RESET;
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
    return  RED "Grade is too low" RESET;
}

void Bureaucrat::signForm(Form& form)
{
    try {
        form.beSigned(*this);
        std::cout << *this << GREEN " signed " << form.getName() << RESET << std::endl;
    }
    catch (std::exception& e) {
        std::cout << *this << " couldn't sign " << form.getName()
                  << " because " << RED << e.what() << RESET << std::endl;
    }
}
