/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khni <ael-khni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 13:39:05 by ael-khni          #+#    #+#             */
/*   Updated: 2022/07/24 15:11:03 by ael-khni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap( name ), FragTrap( name ), ScavTrap( name )
{
    this->_name = name;
    this->ClapTrap::_name = name + "_clap_name";
    
    FragTrap::_hitPoints = 100;
    ScavTrap::_energyPoints = 50;
    FragTrap::_attackDamage = 30;
    
    std::cout << "# DiamondTrap # - " << this->_name << " constructed." << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "# DiamondTrap # - " << this->_name << " is dead." << std::endl;
}

void    DiamondTrap::whoAmI( void ) {
    std::cout << "I am a DiamondTrap named " << this->_name << ", ClapTrap name: " << ClapTrap::_name << std::endl;
}