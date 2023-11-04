#pragma once

#include <string>
#include <stack>
#include <iostream>
#include <sstream>
#include <cmath>

class RPN
{
private:
    std::stack<int> _stack;

    typedef int (RPN::*func)(int, int);
    struct do_op {
        std::string op;
        func f;
    };

    do_op _ops[5];

    int add(int a, int b);
    int sub(int a, int b);
    int mul(int a, int b);
    int div(int a, int b);
    int pow(int a, int b);

    int         index_of(std::string str, std::string *arr, int size);
    int         ft_stoi(const std::string& str);
    std::string ft_all_of(const std::string& str, int (*isDigit)(int));

public:
    RPN();
    RPN(RPN const &other);
    RPN &operator=(RPN const &other);
    ~RPN();

    void run(std::string input);
};
