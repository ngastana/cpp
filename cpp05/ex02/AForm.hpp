/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:43:20 by ngastana          #+#    #+#             */
/*   Updated: 2025/04/10 19:42:22 by ngastana         ###   ########.fr       */
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

class AForm
{	
	public:
		AForm(void);
		AForm(std::string name, int gradeToSing, int gradeToExecute);
		AForm(const AForm& copy);
		virtual	~AForm();
		
		AForm& operator=(const AForm& other);
		
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

		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char *what(void) const throw();
		};
		
		virtual void execute(Bureaucrat const & executor) const = 0; //QUIETO PARADO!! solo las clases pueden ejecutar este comendo TU NO.
		//Si las clases no tienen esta funcion implementada no pueden ser instanciadas
		//imaginate que llamo a una subclase y no tiene execute(), pues nada no responde na. polimorfismo de forma segura
		
	private:
		const std::string	_name;
		const int			_gradeToSign;
		const int			_gradeToExecute;
		bool				_signed;		
};

std::ostream& operator<<(std::ostream& out, const AForm& form);

#endif