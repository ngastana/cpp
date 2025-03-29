/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 11:55:20 by ngastana          #+#    #+#             */
/*   Updated: 2025/03/27 13:08:07 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal:: Animal (void)
{
    std::cout << GREEN "Animal was created" << std::endl;
}

Animal::~Animal (void)
{
    std::cout << RED "Animal was destroyed" << std::endl;
}

Animal::std::string	getType()
{

}

