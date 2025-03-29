/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 12:54:10 by ngastana          #+#    #+#             */
/*   Updated: 2025/03/27 13:08:07 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"


class	Animal
{
	protected:
		std::string	type;
	
	public:
		Animal(void);
		Animal(std::string type);
		virtual ~Animal(void);

		std::string	getType() const;
		void  		setType(std::string type);
		virtual void		makeSound(void) const;
		
};



#endif