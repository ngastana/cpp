/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 12:53:30 by ngastana          #+#    #+#             */
/*   Updated: 2025/04/01 17:15:26 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal
{
	public:
		Cat(void);
		Cat (const Cat &copy);
		~Cat();

		Cat& operator=(const Cat& other);
		
		void	makeSound(void) const;
		std::string	getIdea(int i) const;
		void  		setIdea(int i, std::string const & idea);

	private:
		Brain	*_brain;
};

#endif