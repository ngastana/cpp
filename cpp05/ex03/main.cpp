/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:13:27 by ngastana          #+#    #+#             */
/*   Updated: 2025/04/10 22:26:04 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>
#include <cstdlib> // for srand
#include <ctime>   // for time

int main() {
	srand(time(NULL)); // Seed the random generator
	try {
		Intern someIntern;
		AForm* form = someIntern.makeForm("robotomy request", "Bender");

		boss.signForm(*form);
		boss.executeForm(*form);
		delete form; // Don't forget to delete after using

	}
	return 0;
}
