/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:50:42 by ngastana          #+#    #+#             */
/*   Updated: 2025/03/05 18:44:29 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main( void ) 
{
    ClapTrap persona("Eneko");
    ClapTrap persona1("Madona");
    FragTrap persona2("Nerea");
    ScavTrap persona3("Ane");

    persona.attack("Robot1");
    persona.beRepaired(2);
    persona.attack(persona1.getName());
    persona1.takeDamage(persona.getAttackDamage());
    persona1.beRepaired(2);
    persona2.highFivesGuys();
    persona3.guardGate();
    
    return 0;
}