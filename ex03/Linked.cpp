#include "Linked.hpp"

Linked::Linked() : head(0)
{
    // std::cout << "Calling Linked()" << std::endl;
}

Linked::~Linked()
{
    Node *tmp;
    while (head)
    {
        tmp = head;
        head = tmp->next;

        delete tmp;
    }
    // std::cout << "Calling ~Linked()" << std::endl;
}

void Linked::pushBack(AMateria *m)
{
    if (!head)
        head = new Node(m);
    else
    {
        Node *tmp = head;
        while (tmp->next)
            tmp = tmp->next;
        tmp->next = new Node(m);
    }
}