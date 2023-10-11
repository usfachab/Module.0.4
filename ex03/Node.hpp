#ifndef Node_HPP
#define Node_HPP

#include "AMateria.hpp"

class Node
{
public:
    Node( AMateria* materia );
    ~Node();

    AMateria* m;
    Node* next;
};

#endif