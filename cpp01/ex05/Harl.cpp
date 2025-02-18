/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:53:33 by ngastana          #+#    #+#             */
/*   Updated: 2025/02/17 18:57:29 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void Harl::debug( void )
{
	std::cout << "Debug messages contain contextual information. They are mostly used for problem diagnosis" << std::endl;
}

void Harl::info( void )
{
	std::cout << "These messages contain extensive information. They are helpful for tracing program execution in a production environment." << std::endl;
}

void Harl::warning( void )
{
	std::cout << "Warning messages indicate a potential issue in the system. However, it can be handled or ignored." << std::endl;
}

void Harl::error( void )
{
	std::cout << "These messages indicate an unrecoverable error has occurred. This is usually a critical issue that requires manual intervention." << std::endl;
}

void Harl::complain( std::string level )
{
	std::string signal[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while (i < 4 && signal[i] != level)
		i++;
	switch (i)
	{
		case 0:
			debug();
			break;
		case 1:
			info();
			break;
		case 2:
			warning();
			break;
		case 3:
			error();
			break;
		default:
			std::cout << "Unexpected input." << std::endl;
			break;
	}
}