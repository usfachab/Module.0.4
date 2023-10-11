#ifndef LINKED_HPP
#define LINKED_HPP

#include "Node.hpp"

class Linked
{
private:
    Node* head;

public:
    Linked();
    ~Linked();

    void pushBack( AMateria* m );
};

#endif