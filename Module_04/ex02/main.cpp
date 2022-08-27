/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khni <ael-khni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:35:44 by ael-khni          #+#    #+#             */
/*   Updated: 2022/07/25 14:50:54 by ael-khni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

interface is a class that contains only pure virtual functions and foce
the subclasses to implement them.


C++ virtual function:
- A C++ virtual function is a member function in the base class that you redefine
    in a derived class. It is declared using the virtual keyword.
- It is used to tell the compiler to perform dynamic linkage or late binding
    on the function.
- There is a necessity to use the single pointer to refer to all the objects of 
    the different classes. So, we create the pointer to the base class that refers
    to all the derived objects. But, when base class pointer contains the address of
    the derived class object, always executes the base class function. This issue
    can only be resolved by using the 'virtual' function.
- A 'virtual' is a keyword preceding the normal declaration of a function.
- When the function is made virtual, C++ determines which function is to be invoked
    at the runtime based on the type of the object pointed by the base class pointer.

*/

/* virtual means the the linkage will be dynamic not static 
    Explaination:
    At the beginning, we had a statis relution of the function calls, It means that
    during the compilation, (the compiler) we already will know which function to call.
    and for this we use the type of the variable.
    The only way for the compiler to know the behavior of my object is by knowing its type.
    and we marked it as a Character type. and the compiler will assume that its a Character.
    Therefore, it uses the Character version of the function.
    It was a static link! means that during the compilation is determined it won't change later.
    However, during the compilation let assume that we don't want it as a Warriror, but as a Wizard.
    it may point on a Warrior once and on the Wizard once based on what the user input.
    Thanks to the virtual, the resulotion of the function call wil be dynamic. and it will be
    decided at runtime.

    When we call the member function, during the execution becauese it's a function with 
    a dynamic link, it will look for the actual type of the object. It will walk 
    through the inheritance tree to find the actual type.

    A virtual member function is called a method.
    The definition of a method is a member function which resulotion will be dynamic.

Rules of Virtual Function:

    - Virtual functions must be members of some class.
    - Virtual functions cannot be static members.
    - They are accessed through object pointers.
    - They can be a friend of another class.
    - A virtual function must be defined in the base class, even though it is not used.
    - The prototypes of a virtual function of the base class and all the derived classes 
        must be identical. If the two functions with the same name but different prototypes,
        C++ will consider them as the overloaded functions.
    - We cannot have a virtual constructor, but we can have a virtual destructor

*/

#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongCat.hpp"

/*
    The order of constructor and destructor:
        1. Base constructor
        2. Derived constructor
        3. Derived destructor
        4.Base destructor
*/

int main( void )
{
    // const AAnimal d;
    
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    delete j;//should not create a leak
    delete i;

    Dog basic;
    {
        Dog tmp = basic;
    }

    const AAnimal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    for ( int i = 0; i < 4; i++ ) {
        delete animals[i];
    }

    return 0;
}