/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 11:46:30 by ngastana          #+#    #+#             */
/*   Updated: 2025/03/27 13:08:07 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
    std::cout << "Cat was created" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "Cat was destroyed" << std::endl;
}

Cat::Cat(std::string type)
{
    this->setType(type);
}

void Cat::makeSound(void) const
{
    std::cout << "BARK BARK!!" << std::endl;
}
