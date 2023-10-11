#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Calling Brain()" << std::endl;
    ideas = new std::string [ 100 ];
}

Brain::~Brain()
{
    std::cout << "Calling ~Brain()" << std::endl;
    delete [] ideas;
}

Brain::Brain( const Brain& obj )
{
    std::cout << "Calling Brain( copy )" << std::endl;
    *this = obj;
}

Brain& Brain::operator=( const Brain& rhs )
{
    if ( this == &rhs )
        return ( *this );

    std::cout << "Calling Brain( operator )" << std::endl;
    for ( int i = 0; i < 100; i++ )
        ideas[ i ] = rhs.ideas[ i ];

    return ( *this );
}