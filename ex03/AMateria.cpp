#include "AMateria.hpp"

AMateria::AMateria() : type ( "AMateria" )
{
    // std::cout << "Calling AMateria()" << std::endl;
}

AMateria::AMateria( std::string const& mType ) : type ( mType )
{
    // std::cout << "Calling AMateria( param )" << std::endl;
}

AMateria::AMateria( const AMateria& obj ) : type ( obj.type )
{
    // std::cout << "Calling AMateria( copy )" << std::endl;
}

AMateria& AMateria::operator=( const AMateria& rhs )
{
    // std::cout << "Calling AMateria( operator )" << std::endl;

    type = rhs.type;
    return ( *this );
}

AMateria::~AMateria()
{
    // std::cout << "Calling ~AMateria()" << std::endl;
}

std::string const& AMateria::getType() const
{
    return ( type );
}

void AMateria::use( ICharacter& target )
{
    if ( type == "ice" )
        std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    if ( type == "cure" )
        std::cout << "* heals  " << target.getName() << "'s wounds *" << std::endl;
}