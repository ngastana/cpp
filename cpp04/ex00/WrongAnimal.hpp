/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 13:09:31 by ngastana          #+#    #+#             */
/*   Updated: 2025/03/27 13:11:45 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

# include <iostream>

class	WrongAnimal
{
	protected:
		std::string	type;
	
	public:
		WrongAnimal(void);
		WrongAnimal(std::string type);
		virtual ~WrongAnimal(void);

		std::string	getType() const;
		void  		setType(std::string type);
		virtual void		makeSound(void) const;
		
};

#endif