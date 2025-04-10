/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 22:57:49 by ngastana          #+#    #+#             */
/*   Updated: 2025/04/10 22:57:50 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void) {}
Intern::Intern(const Intern& copy) { (void)copy; }
Intern::~Intern(void) {}
Intern& Intern::operator=(const Intern& other) { (void)other; return *this; }

AForm* Intern::*makeForm(const std::string& nameForm, const std::string& targetForm) {
	std::string names[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	AForm* forms[] = {
		new ShrubberyCreationForm(targetForm),
		new RobotomyRequestForm(targetForm),
		new PresidentialPardonForm(targetForm)
	};

	for (int i = 0; i < 3; ++i) {
		if (nameForm == names[i]) {
			std::cout << "Intern creates " << nameForm << std::endl;
			return forms[i];
		} else {
			delete forms[i]; // prevent memory leak for unused ones
		}
	}

	throw std::invalid_argument("Intern: Form not found");
}