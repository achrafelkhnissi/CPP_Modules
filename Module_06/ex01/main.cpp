// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   main.cpp                                           :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: ael-khni <ael-khni@student.1337.ma>        +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2022/08/09 16:21:50 by ael-khni          #+#    #+#             */
// /*   Updated: 2022/08/09 16:26:52 by ael-khni         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

#include <iostream>

struct Data
{
    std::string name;
    int         age;
};

uintptr_t    serialize( Data *data ) {
    return ( reinterpret_cast< uintptr_t >( data ) );
}

Data*   deserialize( uintptr_t data ) {
    return ( reinterpret_cast< Data* >( data ) );
}

int main( void )
{
    Data *data = new Data;

    data->name = "achraf";
    data->age = 30;

    std::cout << "Name: " << deserialize( serialize( data ) )->name << std::endl;
    std::cout << "Age: " << deserialize( serialize( data ) )->age << std::endl;

    delete data;

    return EXIT_SUCCESS;
}