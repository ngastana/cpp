/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 16:56:32 by ngastana          #+#    #+#             */
/*   Updated: 2025/04/01 17:21:50 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << GREEN "Brain constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = "Idea[" + std::to_string(i) + "]: YUPI";
}

Brain::Brain(const Brain& copy)
{
    std::cout << GREEN << "Brain copy constructor called" << RESET << std::endl;
    *this = copy;  
}

Brain::~Brain()
{
    std::cout << RED "Brain was destroyed" << std::endl;
}

Brain &Brain::operator=(const Brain &other) {
    std::cout << CYAN "Brain Copy assignment operator called" << std::endl;
    if (this != &other) 
    {
        for (int i= 0; i < 100; i++)
        {
            this->_ideas[i] = other._ideas[i];
        }
    }
    return *this;
}

std::string Brain::getIdea(int i) const
{
    if (i < 0 || i >= 100) return "Invalid index";
    return this->_ideas[i];
}

void Brain::setIdea(int i, std::string const &idea)
{
    if (i < 0 || i >= 100) return;
    this->_ideas[i] = idea;
}
