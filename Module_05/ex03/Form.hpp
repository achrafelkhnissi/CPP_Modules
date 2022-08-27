/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khni <ael-khni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:43:47 by ael-khni          #+#    #+#             */
/*   Updated: 2022/08/03 12:45:56 by ael-khni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string   _name;
    bool                _signed;
    const int           _gradeToSign;
    const int           _gradeToExecute;

    Form();

public:
    Form( const std::string& name, int gradeToSign, int gradeToExecute );
    Form( const Form& src );
    virtual    ~Form();

    Form&   operator=( const Form& rhs );

    std::string getName() const;
    bool        getSigned() const;
    int         getGradeToSign() const;
    int         getGradeToExecute() const;

    void        beSigned( const Bureaucrat& bureaucrat );

    virtual void        execute( const Bureaucrat& executor ) const = 0;

    /* ---------------- Exception Classes ---------------- */
    class GradeTooHighException : public std::exception {
        public:
            virtual const char* what() const throw() { return "Grade too high"; }
    };
    class GradeTooLowException : public std::exception {
        public:
            virtual const char* what() const throw() { return "Grade too low"; }
    };
    class NotSignedException : public std::exception {
        public:
            virtual const char* what() const throw() { return "Form not signed"; }
    };
};

std::ostream&   operator<<( std::ostream& o, const Form& rhs );

#endif // FORM_HPP