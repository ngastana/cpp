/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:42:38 by ngastana          #+#    #+#             */
/*   Updated: 2025/04/10 18:19:02 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

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

class Bureaucrat;

class RobotomyRequestForm : public AForm
{	
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string const& target);
;
		RobotomyRequestForm(const RobotomyRequestForm& copy);
		virtual	~RobotomyRequestForm();
		
		RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
		
		std::string	getTarget (void) const;
		
		void 		beSigned(const Bureaucrat& b);
		
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what(void) const throw();
		};
	
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what(void) const throw();
		};
		
		void execute(Bureaucrat const & executor) const;
		
	private:
		const std::string	_target;		
};

std::ostream& operator<<(std::ostream& out, const RobotomyRequestForm& form);

#endif