/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 11:46:15 by ngastana          #+#    #+#             */
/*   Updated: 2025/03/29 10:38:47 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
    std::cout << "Dog was created" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "Dog was destroyed" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "BARK BARK!!" << std::endl;
}

