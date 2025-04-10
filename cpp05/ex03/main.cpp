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
#include <iostream>
#include <cstdlib> // for srand
#include <ctime>   // for time

int main() {
	srand(time(NULL)); // Seed the random generator
	try {
		Bureaucrat boss("Alice", 1);
		Bureaucrat junior("Bob", 135);
		Bureaucrat intern("Charlie", 150);

		ShrubberyCreationForm shrub("garden");
		RobotomyRequestForm robo("Bender");
		PresidentialPardonForm pardon("Ford Prefect");

		std::cout << "\n===== FORM STATUS BEFORE SIGNING =====" << std::endl;
		std::cout << shrub << std::endl;
		std::cout << robo << std::endl;
		std::cout << pardon << std::endl;

		std::cout << "\n===== SIGNING FORMS =====" << std::endl;
		junior.signForm(shrub);      // should work
		junior.signForm(robo);       // should fail
		boss.signForm(robo);         // should work
		boss.signForm(pardon);       // should work

		std::cout << "\n===== FORM STATUS AFTER SIGNING =====" << std::endl;
		std::cout << shrub << std::endl;
		std::cout << robo << std::endl;
		std::cout << pardon << std::endl;

		std::cout << "\n===== EXECUTING FORMS =====" << std::endl;

		intern.executeForm(shrub);   // should fail (grade too low)
		std::cout << "\n==========" << std::endl;
		junior.executeForm(shrub);   // should work
		std::cout << "\n==========" << std::endl;
		boss.executeForm(robo);      // should work (robotomy 50%)
		std::cout << "\n==========" << std::endl;
		boss.executeForm(robo);      // run it twice to test randomness
		std::cout << "\n==========" << std::endl;
		boss.executeForm(pardon);    // should work
		
		std::cout << "\n✅ ALL TESTS COMPLETED!" << std::endl;

	} catch (std::exception &e) {
		std::cerr << "💥 Exception caught: " << e.what() << std::endl;
	}
	return 0;
}
