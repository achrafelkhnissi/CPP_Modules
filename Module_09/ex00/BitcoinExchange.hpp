#pragma once

#include <iostream>
#include <map>
#include <fstream>
#include <sstream>

typedef std::string string;

class BitcoinExchange
{
private:
    std::map<string, string>    _data;

    string  previousDate(const string& date);
    string  nextDate(const string& date);
    string  trim(const string& str);

    void    validateNumber(const string &str);
    bool    fileExists(const string &filename);
    bool    fileIsEmpty(const string &filename);
    bool    validDate(const string &date);
    bool    isLeapYear(int year);
    bool    ft_all_of(const string &str, int (*isDigit)(int));

    int     ft_stoi(const string &str);
    double  ft_stod(const string &str);
    string  ft_to_string(int value);

public:
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &copy);
    BitcoinExchange &operator=(const BitcoinExchange &other);
    ~BitcoinExchange();

    void run(const string &filename);
};
