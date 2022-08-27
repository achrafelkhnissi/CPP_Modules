/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khni <ael-khni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:11:45 by ael-khni          #+#    #+#             */
/*   Updated: 2022/07/24 12:38:48 by ael-khni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
    std::string     _name;
    unsigned int    _hitPoints;
    unsigned int    _energyPoints;
    unsigned int    _attackDamage;

    ClapTrap();

public:
    ClapTrap( std::string name );
    ~ClapTrap();

    ClapTrap(const ClapTrap &);
    ClapTrap&       operator=(const ClapTrap& rhs);

    void            attack(std::string const& target);
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);

};

#endif // CLAPTRAP_HPP