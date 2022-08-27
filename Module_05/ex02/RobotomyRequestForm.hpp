/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khni <ael-khni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:22:00 by ael-khni          #+#    #+#             */
/*   Updated: 2022/08/03 13:13:57 by ael-khni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    const std::string   _target;

    RobotomyRequestForm();

public:
    RobotomyRequestForm( const std::string& target );
    RobotomyRequestForm( const RobotomyRequestForm& src );
    ~RobotomyRequestForm();

    RobotomyRequestForm &operator=( RobotomyRequestForm& rhs );

    void        execute( const Bureaucrat& executor ) const;
};

#endif // ROBOTOMYREQUESTFORM_HPP