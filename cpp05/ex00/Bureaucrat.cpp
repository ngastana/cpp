/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:38:48 by ngastana          #+#    #+#             */
/*   Updated: 2025/04/09 11:54:20 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name("NEREABOSS"), _grade(1)
{}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade) 
{}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "LO hemos matado" << std::endl;
}

Bureaucrat :: Bureaucrat (const Bureaucrat& copy)
{
    std::cout << GREEN << "Bureaucrat copy constructor called" << RESET << std::endl;
    *this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
    std::cout << CYAN "Bureaucrat Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->_name = other._name;
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
    if (_grade >= 150)
        std::cout << "demasiado grande" << std::endl;
    this->_grade += 1;
}

void Bureaucrat::decrementGrade(void)
{
    if (_grade <= 1)
        std::cout << "demasiado pequeña" << std::endl;
    this->_grade -= 1;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &Bureaucrat)
{
	out << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade() << ".";
	return out;
}
