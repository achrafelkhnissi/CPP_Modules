/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khni <ael-khni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:56:49 by ael-khni          #+#    #+#             */
/*   Updated: 2022/07/24 15:07:42 by ael-khni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) 
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;

    std::cout << "< ScavTrap > - " << this->_name << " constructed." << std::endl;

    // std::cout << "_name: " << this->_name << std::endl;
    // std::cout << "_hitPoints: " << this->_hitPoints << std::endl;
    // std::cout << "_energyPoints: " << this->_energyPoints << std::endl;
    // std::cout << "_attackDamage: " << this->_attackDamage << std::endl;
    // std::cout << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "< ScavTrap > - " << this->_name << " destructed." << std::endl;
    // std::cout << "_name: " << this->_name << std::endl;
    // std::cout << "_hitPoints: " << this->_hitPoints << std::endl;
    // std::cout << "_energyPoints: " << this->_energyPoints << std::endl;
    // std::cout << "_attackDamage: " << this->_attackDamage << std::endl;
    // std::cout << std::endl;
}

void    ScavTrap::attack( std::string const& target ) {
    if ( this->_energyPoints <= 0 ) {
        std::cout << "< ScavTrap > - " << this->_name << " is out of energy." << std::endl;
        return;
    }
    std::cout << "< ScavTrap > - " << this->_name << " attacks " << target << " at range, causing " << this->_attackDamage << " points of damage !" << std::endl;
    this->_energyPoints -= 1;
}

void    ScavTrap::guardGate() {
    std::cout << "< ScavTrap > - " << this->_name << " is now in Gate keeper mode." << std::endl;
}