/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 13:09:31 by ngastana          #+#    #+#             */
/*   Updated: 2025/03/29 13:33:21 by ngastana         ###   ########.fr       */
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
		std::string	_type;
	
	public:
		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal (const WrongAnimal &copy);
		virtual ~WrongAnimal(void);

		WrongAnimal &operator=(const WrongAnimal &other);
		
		std::string	getType() const;
		virtual void makeSound(void) const;
};

#endif
