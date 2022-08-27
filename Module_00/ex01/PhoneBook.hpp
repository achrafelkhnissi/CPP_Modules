/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khni <ael-khni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 10:14:49 by ael-khni          #+#    #+#             */
/*   Updated: 2022/07/18 14:30:41 by ael-khni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
    Contact     _contacts[8];
    int         _readInput(void) const;
    // uint64_t    _numberOfContacts;
public:
    PhoneBook();
    ~PhoneBook();
    void    addContact(void);
    void    printContacts(void) const;
    void    search(void) const;
    void    welcome(void) const;
};

#endif // PHONEBOOK_HPP