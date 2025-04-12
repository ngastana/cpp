/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 22:57:37 by ngastana          #+#    #+#             */
/*   Updated: 2025/04/12 10:17:37 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

//# include "Bureaucrat.hpp" como no la usa directamente (no  hay apributos de tipo Bureaucrat) menciono class Bureucrat y cuela
# include <string>
# include <iostream> 
# include "AForm.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

class Intern
{	
	public:
		Intern(void);
		Intern(const Intern& copy);
		~Intern();
		
		Intern& operator=(const Intern& other);
		AForm* makeForm(const std::string& nameForm, const std::string& targetForm);

		class UnofficialFormException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

#endif
