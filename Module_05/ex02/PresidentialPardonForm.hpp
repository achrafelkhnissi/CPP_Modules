/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khni <ael-khni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:44:11 by ael-khni          #+#    #+#             */
/*   Updated: 2022/08/03 13:13:32 by ael-khni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    std::string _target;

    PresidentialPardonForm();

public:
    PresidentialPardonForm( const std::string& target );
    PresidentialPardonForm( const PresidentialPardonForm& src );
    ~PresidentialPardonForm();

    PresidentialPardonForm& operator=( const PresidentialPardonForm& rhs );
    
    void execute( const Bureaucrat& executor ) const;
};

#endif // PRESIDENTIALPARDONFORM_HPP