/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khni <ael-khni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:40:04 by ael-khni          #+#    #+#             */
/*   Updated: 2022/07/20 14:30:43 by ael-khni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"



int main( int ac, char **av ) {

    if (ac != 2) {
        return (std::cout << "Usage: ./harlFilter \"level\"\n", EXIT_FAILURE);
    }
    std::string input = av[1];
    Harl        harl;

    harl.complain(input);

    return EXIT_SUCCESS;
}