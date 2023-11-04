#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <ctime>
#include <iomanip>
#include <sstream>

/* Type definitions */
typedef std::vector<int> int_vector;

/* Class definition */
template<typename Container>
class PmergeMe {

public:
    typedef typename Container::value_type      value_type;
    typedef typename Container::size_type       size_type;
    typedef std::pair <value_type, value_type>  type_pair;
    typedef std::vector <type_pair>             pair_vector;

private:
    Container   _data;
    value_type  _last;
    double      _time;

    int_vector  generate_indexes(size_t n);
    pair_vector generate_pairs(Container &data);
    void        sort_pairs(pair_vector &pairs);
    int         binary_search(int target);
    int         ft_stoa(const char *str);
    bool        is_number(const std::string& s);

public:
    PmergeMe();
    explicit PmergeMe(char **data);
    PmergeMe(const PmergeMe &other);
    PmergeMe &operator=(const PmergeMe &other);

    ~PmergeMe();

    void sort();
    void print_data() const;
    void benchmark() const;
};
