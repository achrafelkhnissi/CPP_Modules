/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khni <ael-khni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:31:21 by ael-khni          #+#    #+#             */
/*   Updated: 2022/07/25 11:42:55 by ael-khni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( void ) : _type( "AAnimel" ) {
    std::cout << this->_type << " constructor called" << std::endl;
}

AAnimal::AAnimal( std::string type ) : _type( type )
{
    std::cout << "AAnimal " << this->_type << " constructor called" << std::endl;
}

AAnimal::~AAnimal( void )
{
    std::cout << "Animal destructor called" << std::endl;
}

AAnimal::AAnimal( const AAnimal& src )
{
    std::cout << "AAnimal copy constructor called" << std::endl;
    *this = src;
}

AAnimal& AAnimal::operator=( const AAnimal& rhs )
{
    std::cout << "<AAnimal.cpp:35: AAnimal assignment operator called" << std::endl;
    if ( this != &rhs ) {
        this->_type = rhs._type;
    }
    return *this;
}

void AAnimal::makeSound( void ) const
{
    std::cout << "AAnimal makeSound called" << std::endl;
}

std::string    AAnimal::getType( void ) const
{
    return this->_type;
}