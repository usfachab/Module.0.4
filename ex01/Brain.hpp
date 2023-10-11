#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
public:
    Brain();
    Brain( const Brain& );
    Brain& operator=( const Brain& );
    ~Brain();

    std::string* ideas;
};

#endif