/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 10:41:21 by ngastana          #+#    #+#             */
/*   Updated: 2025/03/25 21:31:35 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

FragTrap::FragTrap(void): ClapTrap(){
    std::cout << GREEN "FragTrap " << this->getName() << " has been created" << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
}

FragTrap::FragTrap(std::string name) : ClapTrap (name){

    std::cout << GREEN "FragTrap " << this->getName() << " has been created" << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
}

FragTrap::~FragTrap() {
    std::cout << RED "FragTrap " << this->getName() << " has been destroyed" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << BLUE "FragTrap " << this->getName() << " has high fived" << std::endl;
}