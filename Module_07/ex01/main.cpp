/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khni <ael-khni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 03:41:27 by ael-khni          #+#    #+#             */
/*   Updated: 2022/08/12 03:51:53by ael-khni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

#define N 5

int main( void )
{
    int arr1[] = { 1, 2, 3, 4, 5 };

    std::cout << "arr1: " << std::endl;
    iter(arr1, N, &print);

    double arr2[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };

    std::cout << "\narr2: " << std::endl;
    iter(arr2, N, &print);

    char arr3[] = { 'a', 'b', 'c', 'd', 'e' };

    std::cout << "\narr3: " << std::endl;
    iter(arr3, N, &print);

    std::string arr4[] = { "one", "two", "three", "four", "five" };

    std::cout << "\narr4: " << std::endl;
    iter(arr4, N, &print);

    return 0;
}

/* ************************************************************************** */

// class Awsome{

// public:
//     Awsome(void): _n(42) {return;}
//     int get(void)const {return this->_n;}
// private:
//     int _n;
// };

// std::ostream &operator<<(std::ostream &o, Awsome const &rhs) {o<<rhs.get(); return o;}

// template <typename T>
// void print(T const &x){std::cout << x << std::endl; return;}

// int main(){
//     int tab[] = {0,1,2,3,4};
//     Awsome tab2[5];

//     iter(tab, 5, print);
//     iter(tab2, 5, print);
// }