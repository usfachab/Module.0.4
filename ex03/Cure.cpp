#include "Cure.hpp"

Cure::Cure() : AMateria( "cure" )
{
    // std::cout << "Calling Cure()" << std::endl;
}

Cure::~Cure()
{
    // std::cout << "Calling ~Cure()" << std::endl;
}

Cure::Cure( const Cure& cure ) : AMateria( "cure" ) { *this = cure; }

Cure& Cure::operator=( const Cure& rhs )
{
    type = rhs.type;
    return ( *this );
}

AMateria* Cure::clone() const
{
    return ( new Cure() );
}
