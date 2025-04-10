/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:38:42 by ngastana          #+#    #+#             */
/*   Updated: 2025/04/10 22:40:01 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): AForm("Garden 🌲", 145, 137), _target("Default") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: AForm("Garden 🌲", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy): _target(copy._target){
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
	if (this != &other) {
		this->_target = other._target;
	}
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!this->isSigned())
		throw AForm::FormNotSignedException();

	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();


	std::ofstream file((_target + "_shrubbery").c_str());
	if (!file.is_open())
	{
		std::cerr << RED "Could not open file for writing." RESET << std::endl;
		return;
	}
	std::cout << GREEN << _target << "`'s shrubbery planted! 🌲🌲🌲🌲🌲🌲 \n" RESET;
	
	// ASCII TREE ART 🌲
	GREEN;
	file << "         *       \n";
	file << "        ***       \n";
	file << "       *****       \n";
	file << "      *******     \n";
	file << "     *********    \n";
	file << "        ||       \n";
	file << "        ||       \n";
	file << "    " << _target << "'s shrubbery planted!\n" RESET;

	file.close();
}
