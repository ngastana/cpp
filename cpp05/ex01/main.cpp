/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:13:27 by ngastana          #+#    #+#             */
/*   Updated: 2025/04/10 12:20:09 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try {
		// Create a valid form and bureaucrat
		Bureaucrat boss("Alice", 10);
		Form taxForm("Tax Return", 20, 30);
		
		std::cout << boss << std::endl;
		std::cout << taxForm << std::endl;

		// Alice should be able to sign it (10 <= 20)
		boss.signForm(taxForm);
		std::cout << taxForm << std::endl;

	} catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	std::cout << "------------------------" << std::endl;

	try {
		// Bureaucrat too low to sign
		Bureaucrat intern("Bob", 150);
		Form launchCode("Missile Launch", 50, 20);

		std::cout << intern << std::endl;
		std::cout << launchCode << std::endl;

		// Should throw exception and print failure message
		intern.signForm(launchCode);
		std::cout << launchCode << std::endl;

	} catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	std::cout << "------------------------" << std::endl;

	try {
		// Invalid form: grade too high
		Form illegal("Illegal Form", 0, 100);
	} catch (std::exception &e) {
		std::cerr << "Caught creation error (too high): " << e.what() << std::endl;
	}

	try {
		// Invalid form: grade too low
		Form invalid("Invalid Form", 100, 200);
	} catch (std::exception &e) {
		std::cerr << "Caught creation error (too low): " << e.what() << std::endl;
	}

	return 0;
}

