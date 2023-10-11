#include "Ice.hpp"

Ice::Ice() : AMateria( "ice" )
{
    // std::cout << "Calling Ice()" << std::endl;
}

Ice::~Ice()
{
    // std::cout << "Calling ~Ice()" << std::endl;
}

Ice::Ice( const Ice& ice ) : AMateria( "ice" ) { *this = ice; }

Ice& Ice::operator=( const Ice& rhs )
{
    type = rhs.type;
    return ( *this );
}

AMateria* Ice::clone() const
{
    return ( new Ice() );
}