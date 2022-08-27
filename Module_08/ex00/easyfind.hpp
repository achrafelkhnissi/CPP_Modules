/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khni <ael-khni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 21:53:45 by ael-khni          #+#    #+#             */
/*   Updated: 2022/08/15 20:13:08 by ael-khni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

template < typename T >
void    easyfind( T& container, int value )
{
    if ( std::find( container.begin(), container.end(), value ) != container.end() )
        std::cout << "Found." << std::endl;
    else
        std::cout << "Not found." << std::endl;
}