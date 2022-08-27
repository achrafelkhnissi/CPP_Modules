/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khni <ael-khni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 03:58:03 by ael-khni          #+#    #+#             */
/*   Updated: 2022/08/12 04:55:10 by ael-khni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template < typename T >
class Array {

private:
    T*              _arr;
    unsigned int    _size;

public:
    Array( void ) : _arr( new T() ), _size( 0 ) {};
    Array( unsigned int n ) : _arr( new T[n] ), _size( n ) {};
    Array( const Array& rhs ) : _arr( new T[rhs.size()] ), _size( rhs.size() ) {
        for ( unsigned int i( 0 ); i < _size; i++ )
            _arr[i] = rhs._arr[i];
    };

    Array& operator=( const Array& rhs ) {
        if ( this != &rhs ) {
            delete [] _arr;
            _arr = new T[rhs.size()];
            _size = rhs._size;
            for ( unsigned int i( 0 ); i < _size; i++ )
                _arr[i] = rhs._arr[i];
        }
        return *this;
    }

    T& operator[]( unsigned int i ) const {
        if ( i >= _size )
            throw OutOfBoundsException();
        return _arr[i];
    }

    unsigned int  size( void ) const { return _size; }

    ~Array( void ) { delete [] _arr; }

    class OutOfBoundsException : public std::exception {
        public:
            virtual const char* what() const throw() { return "Index is out of bounds";}
    };
};

template < typename T >
std::ostream& operator<<( std::ostream& out, const Array<T>& arr ) {
    for ( unsigned int i( 0 ); i < arr.size(); i++ )
        out << arr[i] << " ";
    return out;
}