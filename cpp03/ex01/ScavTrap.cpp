/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:20:51 by ngastana          #+#    #+#             */
/*   Updated: 2025/03/16 10:54:45 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap(){
    std::cout << "ScavTrap " << this->getName() << " has been created" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
    std::cout << "ScavTrap " << this->getName() << " has been created" << std::endl;
}

ScavTrap::~ScavTrap(void){
    std::cout << "ScavTrap " << this->getName() << " has been destroyed" << std::endl;
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->getName() << " has enterred in Gate keeper mode" << std::endl;
}