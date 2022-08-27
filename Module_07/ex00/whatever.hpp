/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khni <ael-khni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 03:21:28 by ael-khni          #+#    #+#             */
/*   Updated: 2022/08/12 03:36:41 by ael-khni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template< typename T >
void    swap( T& a, T& b ) {
    T tmp = a;
    a = b;
    b = tmp;
}

template< typename T >
T       min( T& a, T& b ) {
    return ( a < b ? a : b );
}

template< typename T >
T       max( T& a, T& b ) {
    return ( a > b ? a : b );
}