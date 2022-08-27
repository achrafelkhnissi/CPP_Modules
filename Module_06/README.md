# CPP-Module-06 | 1337 Khouribga

Scalar conversion 📏

<p align="center">
  <a href="https://github.com/achrafelkhnissi/CPP_Modules/tree/master/Module_05">&#11013;</a>
  <a href="https://github.com/madebypixel02/CPP_Modules">&#127968;</a>
  <a href="https://github.com/achrafelkhnissi/CPP_Modules/tree/master/Module_07">&#10145;</a>
</p>

-----------------------------

## Programming styles

- Procedural oriented programming (C)

- Object oriented programming (C++, Java, Python, Ruby, C#)

- Functional programming (Javascript, Clojure, Haskell). It focuses on pure mathematical functions and immutable data

- Logical programming

- Database programming (SQL)

## What Object Oriented Programming (OOP) is

- **OOP bundles data & the functions which act on it together.** It can aid conceptualising a program, because in calling a member function, one if effectively telling the data what to do to itself

- **Data hiding**. Just like functions can have local variables not visible to the rest of the program, so can objects. This is for storing data that is not revealed or set directly but only via methods (```member functions```)

- **Automatic initialisation**. A class can have a method (```a constructor```) which is automatically called whenever a new object of that class comes into being. There is a corresponding method (```a destructor'```) which is called when an object is disposed of and is typically used for clearing up

- **Same name, different function**. Different functions can have the same name provided they are distinguished by their parameter types. This is useful in procedural languages but is almost vital in OOP languages. In OOP, this ability to have multiple functions with the same name is called ```overloading```

- **Derived classes**. If one requires a class which like a class one already has but requires extra features then one can derive a class from an existing class

## Advantages of C++ over C

- **Strings & arrays**. C does not really have variables of string or array type. Although C++ does not come with strings or arrays either, one can write classes which encapsulate the memory manipulation routines and, at last, use instances of them as if they were intrinsic string & array variables without further hassle

- **Memory deallocation**. C does not automatically free up memory when it is no longer needed. Although C++ still has this problem, one can create classes for the variables which need memory allocation, perform the allocation in the class's constructor & free it up in its destructor. So one only needs to program the freeing up in once instead of everywhere such a variable might cease being used.

- **Function overloading**. In C, when you wants to write a function that can process more than one type of variable, you have to give the functions different names and type the correct name for the data type when using it.

- **Unspecified variable type**. C likes to know what type its variables are even when the specific features of that type are irrelevant. With OOP one can derive all ones variable types on one base class (even if that base class does absolutely nothing!) and treat them all as being of that type.

- **Localised namespaces**. When writing a big program, it is difficult to ensure that names of functions are not duplicated in different files. This is especially a problem for little functions which need not be visible to other modules. In C++ there is a neater bodge-up: bunging all the functions from one file or module in a class, and neatly localises the function names.

## Summary

* Object Oriented Programming is not as different from normal procedural programming as is made out by its advocates and is not as difficult to understand as their proselytising implies.

* It is useful in making big modular programs but such programs should have been structured very similar to an OOP structure anyway.

* It can be more hassle than it is worth for short & quick programs.

* The enthusiasm for C++ in particular is mainly because it adds in some important basic features that were missing from C.

## Resources
* [What is Object Oriented Programming? (Without the Hype)](http://duramecho.com/ComputerInformation/WhatIsObjectOrientedProgramming.html)
