/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:50:42 by ngastana          #+#    #+#             */
/*   Updated: 2025/03/25 21:45:59 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap	josebas("Josebas");
	ClapTrap	kalletano("Kalletano");
	ClapTrap	txutxi;
	ScavTrap	manolito("Manu");
	FragTrap	gustavito("Gustavito");

	gustavito.highFivesGuys();
	gustavito.attack("Andresin");
	manolito.attack("Kalletano");
	kalletano.takeDamage(20);
	josebas.attack("Kalletano");
	kalletano.takeDamage(20);
	josebas.attack("Kalletano");
	manolito.guardGate();
	kalletano.takeDamage(20);
	josebas.beRepaired(20);
	josebas.attack("Kalletano");
	kalletano.takeDamage(20);
	josebas.attack("Kalletano");
	kalletano.takeDamage(20);
	josebas.attack("Kalletano");
	kalletano.takeDamage(20);
	josebas.attack("Kalletano");
	kalletano.takeDamage(20);
	josebas.attack("Kalletano");
	kalletano.takeDamage(20);
	josebas.attack("Kalletano");
	kalletano.takeDamage(20);
	josebas.attack("Kalletano");
	kalletano.takeDamage(20);
	josebas.attack("Kalletano");
	kalletano.takeDamage(20);
	josebas.attack("Kalletano");
	kalletano.takeDamage(20);
	josebas.attack("Kalletano");
	kalletano.takeDamage(20);

	return (0);
}
