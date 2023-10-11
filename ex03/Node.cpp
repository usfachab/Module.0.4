#include "Node.hpp"

Node::Node( AMateria* materia ) : m ( materia ), next ( 0 ) 
{ 
    // std::cout << "Calling Node()" << std::endl;
}

Node::~Node()
{
    delete m;
    // std::cout << "Calling ~Node()" << std::endl;
}
