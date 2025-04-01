/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 15:59:06 by ngastana          #+#    #+#             */
/*   Updated: 2025/04/01 17:22:54 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
    public:
        Brain (void);
        Brain (const Brain &copy);
        ~Brain (void);

		Brain &operator = (const Brain &other);

        std::string getIdea(int i) const;
        void setIdea (int i, std::string const &idea);
    private:
        std::string _ideas[100];
};

#endif