/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 22:57:49 by ngastana          #+#    #+#             */
/*   Updated: 2025/04/12 10:20:39 by ngastana         ###   ########.fr       */
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

AForm* createShrubbery(const std::string& target) {
	return new ShrubberyCreationForm(target);
}

AForm* createRobotomy(const std::string& target) {
	return new RobotomyRequestForm(target);
}

AForm* createPardon(const std::string& target) {
	return new PresidentialPardonForm(target);
}

struct FormEntry {
	std::string name;
	AForm* (*creator)(const std::string&);
};

const char *Intern::UnofficialFormException::what(void) const throw()
{
    return  RED "form is not found" RESET;
}

AForm* Intern::makeForm(const std::string& nameForm, const std::string& targetForm) 
{
	FormEntry form[] = {
		{"shrubbery creation", &createShrubbery},
		{"robotomy request", &createRobotomy},
		{"presidential pardon", &createPardon}
	};

	for (int i = 0; i < 3; ++i) {
		if (nameForm == form[i].name) 
		{
			std::cout << "Intern creates " << nameForm << std::endl;
			return form[i].creator(targetForm);
		}
	}
	throw UnofficialFormException();
}
