/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khni <ael-khni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 08:26:22 by ael-khni          #+#    #+#             */
/*   Updated: 2022/07/18 14:20:00 by ael-khni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _phoneNumber;
    std::string _darkestSecret;
    int         _index;

    std::string _printLen(std::string str) const;
    std::string _getInput(std::string str) const;

public:
    Contact();
    ~Contact();
    void    init(void);
    void    view(int index) const;
    void    display(int index) const;
    void    setIndex(int i);
};

#endif // CONTACT_HPP