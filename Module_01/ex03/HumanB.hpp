/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khni <ael-khni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:55:07 by ael-khni          #+#    #+#             */
/*   Updated: 2022/07/20 16:12:46 by ael-khni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
private:
    std::string _name;
    Weapon*     _weapon;

public:
    HumanB( std::string name );
    ~HumanB();

    void    attack( void ) const;
    void    setWeapon( Weapon& weapon );
};

