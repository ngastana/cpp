/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 10:41:21 by ngastana          #+#    #+#             */
/*   Updated: 2025/03/16 10:41:54 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

FragTrap::FragTrap(void): ClapTrap(){
std::cout << "FragTrap " << this->getName() << " has been created" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap (name){

std::cout << "FragTrap " << this->getName() << " has been created" << std::endl;

}

FragTrap::~FragTrap() {

std::cout << "FragTrap " << this->getName() << " has been destroyed" << std::endl;

}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->getName() << " has high fived" << std::endl;
}