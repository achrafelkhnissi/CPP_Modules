/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedV2.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khni <ael-khni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:08:46 by ael-khni          #+#    #+#             */
/*   Updated: 2022/07/20 10:43:20 by ael-khni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEDV2_HPP
#define SEDV2_HPP

#include <iostream>
#include <fstream>

class SedV2
{
private:
    std::string _inFile;
    std::string _outFile;

public:
    SedV2( std::string filename);
    ~SedV2();

    void            replace( std::string s1, std::string s2);
};

#endif // SEDV2_HPP