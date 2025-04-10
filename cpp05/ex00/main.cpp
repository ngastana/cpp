/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:13:27 by ngastana          #+#    #+#             */
/*   Updated: 2025/04/09 12:38:41 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main() {
    try 
    {
        Bureaucrat b1("Alice", 2);
        std::cout << b1 << std::endl;
        b1.incrementGrade();
        std::cout << b1 << std::endl;

        // Esto debería lanzar excepción
        b1.incrementGrade();
    } 
    catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    try {
        Bureaucrat b2("Bob", 151); // Esto también debería lanzar
    } 
    catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
