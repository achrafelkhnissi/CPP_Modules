/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khni <ael-khni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 16:04:21 by ael-khni          #+#    #+#             */
/*   Updated: 2022/08/11 13:24:10 by ael-khni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter( void ) {
    this->_c = '\0';
    this->_n = 0;
    this->_f = 0.0f;
    this->_d = 0.0;
}

Converter::Converter( const Converter& src ) {
    *this = src;
}

Converter::~Converter( void ) {}

Converter& Converter::operator=( const Converter& rhs ) {
    if ( this != &rhs ) {
        this->_n = rhs.getI();
        this->_f = rhs.getF();
        this->_c = rhs.getC();
    }
    return *this;
}

char    Converter::getC( void ) const {
    return this->_c;
}

void    Converter::setC( char c ) {
    this->_c = c;
}

bool    Converter::isLiterals( void ) const {
    if ( ( _impossible ) || ( _str.compare( "nan" ) == 0 ) || ( _str.compare( "nanf" ) == 0 )
        || ( _str.compare( "+inf" ) == 0 ) || ( _str.compare( "+inff" ) == 0 ) 
        || ( _str.compare( "-inf" ) == 0 ) || ( _str.compare( "-inff" ) == 0 ) 
        || ( _str.compare( "-inff" ) == 0 ) || ( _str.compare( "-inff" ) == 0 )  
        || ( _str.compare( "+inff" ) == 0 ) || ( _str.compare( "+inff" ) == 0 ) ) {
            return true;
    } 
    return false;
}

void    Converter::printChar( void ) const {
    if ( this->isLiterals() || ( !std::isprint( _n ) && ( _n >= 127 ) ) ) {
        std::cout << "Impossible";
    } else if ( !std::isprint( this->_n ) ) {
        std::cout << "None displayable";
    } else {
        std::cout << "'" << getC() << "'";
    }
    std::cout << std::endl;
}

int    Converter::getI( void ) const {
    return this->_n;
}

void    Converter::setI( int n ) {
    this->_n = n;
}

void    Converter::printInt( void ) const {
    if ( this->isLiterals() || ( !std::isprint( _n ) && ( _n >= 127 ) ) ) {
        std::cout << "Impossible";
    } else {
        std::cout << getI();
    }
    std::cout << std::endl;
}

float   Converter::getF( void ) const {
    return this->_f;
}

void    Converter::setF( float f ) {
    this->_f = f;
}

double  Converter::getD( void ) const {

    return this->_d;
}

void    Converter::setD( double d ) {
    this->_d = d;
}

std::string Converter::getStr( void ) const {
    return this->_str;
}

void Converter::setStr( std::string str ) {
    this->_str = str;
    this->setType();
    if ( getType() == NONE ) {
        throw Converter::ConverterException();
    }
}

e_type  Converter::getType( void ) const {
    return this->_type;
}

bool    Converter::isChar( void ) const {
    return _str.length() == 1 && std::isalpha( _str[0] ) && std::isprint( _str[0] );
}

bool    Converter::isInt( void ) const {
    int    j = 0;
    if ( _str[j] == '-' || _str[j] == '+' )
        j++;
    for ( int i( j ); i < ( int ) _str.length(); i++ ) {
        if ( !std::isdigit( _str[i] ) )
            return false;
    }
    return true;
}

bool Converter::isDouble( void ) const {

    if ( _str.find( '.' ) == std::string::npos || _str.find( '.' ) == 0 
        || _str.find( '.' ) == _str.length() - 1 )
        return false;
    int j = 0;
    int found = 0;
    if ( _str[j] == '-' || _str[j] == '+' )
        j++;
    for ( int i( j ); i < ( int ) _str.length(); i++ ) {
        if ( _str[i] == '.' )
            found++;
        if ( ( !std::isdigit( _str[i] ) && _str[i] != '.' ) || found > 1 )
            return false;
    }

    return true;
}

bool    Converter::isFloat ( void ) const {

    if ( _str.find( '.' ) == std::string::npos || _str.back() != 'f' 
        || _str.find( '.' ) == 0 || _str.find( '.' ) == _str.length() - 2 )
        return false;
    int found = 0;
    int j = 0;
    if ( _str[j] == '-' || _str[j] == '+' )
        j++;
    for ( int i( j ); i < ( int ) _str.length() - 1; i++ ) {
        if ( _str[i] == '.' )
            found++;
        if ( ( !std::isdigit( _str[i] ) && _str[i] != '.' ) || found > 1 )
            return false;
    }

    return true;
}

void    Converter::printFloat( void ) const {
    if ( _str.compare( "nan" ) == 0 || _str.compare( "nanf" ) == 0 ) {
        std::cout << "nanf";
    } else if ( _str.compare( "+inff" ) == 0 || _str.compare( "+inf" ) == 0 ) {
        std::cout << "+inff";
    } else if ( _str.compare( "-inff" ) == 0 || _str.compare( "-inf" ) == 0 ) {
        std::cout << "-inff";
    } else if ( _impossible ) {
        std::cout << "Impossible";
    } else {
        if ( _f - static_cast< int > ( _f ) == 0 ) {
            std::cout << _f << ".0f";
        } else {
            std::cout << getF() << "f";
        }
    }
    std::cout << std::endl;
}

void    Converter::printDouble( void ) const {
    if ( _str.compare( "nan" ) == 0 || _str.compare( "nanf" ) == 0 ) {
        std::cout << "nan";
    } else if ( _str.compare( "+inff" ) == 0 || _str.compare( "+inf" ) == 0 ) {
        std::cout << "+inf";
    } else if ( _str.compare( "-inff" ) == 0 || _str.compare( "-inf" ) == 0 ) {
        std::cout << "-inf";
    } else if ( _impossible ) {
        std::cout << "Impossible";
    } else {
        if ( _d - static_cast< int > ( _d ) == 0 ) {
            std::cout << _d << ".0";
        } else {
            std::cout << getD() << "f";
        }
    }
    std::cout << std::endl;

}

void    Converter::setType( void ) {
    if ( isChar() ) {
        _type = CHAR;
    } else if ( isInt() ) {
        _type = INT;
    } else if ( isFloat() ) {
        _type = FLOAT;
    } else if ( isDouble() ) {
        _type = DOUBLE;
    } else if ( isLiterals() ) {
        _type = LITERALS;
    } else {
        _type = NONE;
    }
}

bool    Converter::isImpossible( void ) {
    try
    {
        if ( _type == INT ) {
            _n = std::stoi( _str );
        } else if ( _type == FLOAT ) {
            _f = std::stof( _str );
        } else if ( _type == DOUBLE ) {
            _d = std::stod( _str );
        }
    }
    catch ( std::exception& e )
    {
        _impossible = true;
        return true;
    }
    return false;
}

void    Converter::convert( void ) {
    if ( isImpossible() )
        return;
    switch ( _type ) {
    case CHAR:
        _c = _str[0];
        _n = static_cast< int >( _c );
        _f = static_cast< float >( _c );
        _d = static_cast< double >( _c );
        break;
    case INT:
        _n = std::stoi( _str );
        _f = static_cast< float >( _n );
        _d = static_cast< double >( _n );
        _c = static_cast< char >( _n );
        break;
    case FLOAT:
        _f = std::stof( _str );
        _n = static_cast< int >( _f );
        _d = static_cast< double >( _f );
        _c = static_cast< char >( _f );
        break;
    case DOUBLE:
        _d = std::stod( _str );
        _n = static_cast< int >( _d );
        _f = static_cast< float >( _d );
        _c = static_cast< char >( _d );
        break;
    default:
        break;
    }
}

std::ostream&    operator<<( std::ostream& out, const Converter& rhs ) {
    out << "char: "; rhs.printChar();
    out << "int: "; rhs.printInt();
    out << "float: "; rhs.printFloat();
    out << "double: "; rhs.printDouble();
    return out;
}
