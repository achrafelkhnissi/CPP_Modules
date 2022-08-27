/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khni <ael-khni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:07:42 by ael-khni          #+#    #+#             */
/*   Updated: 2022/07/25 16:59:45 by ael-khni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( std::string const & name ) : _name(name)
{
    for (int i = 0; i < 4; i++) {
        this->_inventory[i] = NULL;
    }
    std::cout << "Character " << this->_name << " created" << std::endl;
}

Character::Character( Character const & src ) : _name(src._name)
{
    // for (int i = 0; i < 4; i++)
    //     this->_inventory[i] = src._inventory[i];
    *this = src;
    std::cout << "Character " << this->_name << " created" << std::endl;
}

Character& Character::operator=( Character const & rhs )
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
        for (int i = 0; i < 4; i++)
            this->_inventory[i] = rhs._inventory[i];
    }
    return *this;
}

Character::~Character()
{
    std::cout << "Character " << this->_name << " destroyed" << std::endl;
    for (int i = 0; i < 4; i++)
        if (this->_inventory[i])
            delete this->_inventory[i];
}

void    Character::equip( AMateria* m ) {
    for (int i = 0; i < 4; i++)
        if (this->_inventory[i] == NULL)
        {
            this->_inventory[i] = m;
            std::cout << "Character " << this->_name << " equipped with " << m->getType() << std::endl;
            return;
        }
    std::cout << "Character " << this->_name << " can't equip " << m->getType() << std::endl;
}

void    Character::unequip( int idx ) {
    if (this->_inventory[idx])
    {
        delete this->_inventory[idx];
        this->_inventory[idx] = NULL;
        std::cout << "Character " << this->_name << " unequipped" << std::endl;
    }
    else
        std::cout << "Character " << this->_name << " can't unequip" << std::endl;
}

void    Character::use( int idx, ICharacter& target ) {
    if (this->_inventory[idx])
    {
        this->_inventory[idx]->use(target);
        std::cout << "Character " << this->_name << " uses " << this->_inventory[idx]->getType() << std::endl;
    }
    else
        std::cout << "Character " << this->_name << " can't use" << std::endl;
}

std::string const& Character::getName() const {
    return this->_name;
}