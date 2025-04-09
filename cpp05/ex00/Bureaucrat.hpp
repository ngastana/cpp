/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 10:25:36 by ngastana          #+#    #+#             */
/*   Updated: 2025/04/09 11:53:24 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

class Bureaucrat
{
    public:
    Bureaucrat(void);
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat& copy);
    virtual	~Bureaucrat();
    
    Bureaucrat& operator=(const Bureaucrat& other);
    
    std::string	getName(void) const;
    int getGrade(void) const;
    
    void incrementGrade(void);
    void decrementGrade(void);

    private:
        std::string	_name;
        int         _grade;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &Bureaucrat);

#endif
