/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:43:20 by ngastana          #+#    #+#             */
/*   Updated: 2025/04/10 11:08:24 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

//# include "Bureaucrat.hpp" como no la usa directamente (no  hay apributos de tipo Bureaucrat) menciono class Bureucrat y cuela
# include <string>
# include <iostream> 

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

class Bureaucrat;

class Form
{	
	public:
		Form(void);
		Form(std::string name, int gradeToSing, int gradeToExecute);
		Form(const Form& copy);
		virtual	~Form();
		
		Form& operator=(const Form& other);
		
		std::string	getName(void) const;
		int 		getGradeToSign(void) const;
		int 		getGradeToExecute(void) const;
		bool		isSigned(void) const;
		
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
		
	private:
		const std::string	_name;
		const int			_gradeToSign;
		const int			_gradeToExecute;
		bool				_signed;		
};

std::ostream& operator<<(std::ostream& out, const Form& form);

#endif