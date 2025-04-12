/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:13:27 by ngastana          #+#    #+#             */
/*   Updated: 2025/04/12 10:34:48 by ngastana         ###   ########.fr       */
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


int main() 
{
    Intern someRandomIntern;
    Bureaucrat zaphod("Zaphod", 1);

    AForm* form = NULL;
    try 
	{
        form = someRandomIntern.makeForm("presidential pardon", "Ford Prefect");
        zaphod.signForm(*form);
        zaphod.executeForm(*form);
        delete form;
    } 
	catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    try 
	{
        AForm* unknown = someRandomIntern.makeForm("invalid form", "Nobody");
        delete unknown;
    } 
	catch (std::exception &e) 
	{
        std::cerr << e.what() << std::endl;
    }
    return 0;
}



