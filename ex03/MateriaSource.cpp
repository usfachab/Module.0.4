#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    // std::cout << "Calling MateriaSource()" << std::endl;
    for ( int i = 0; i < 4; i++ )
        inventory[ i ] =  0 ;
}

MateriaSource::~MateriaSource()
{
    for ( int i = 3; i >= 0; i-- )
    {
        if ( inventory[ i ] )
            delete inventory[ i ];
    }
    // std::cout << "Calling ~MateriaSource()" << std::endl;
}

void MateriaSource::learnMateria( AMateria* m )
{
    for ( int i = 0; i < 4; i++ )
    {
        if ( m->getType() == "ice" && !inventory[ i ] )
        {
            inventory[ i ] = m;
            break ;
        }
        else if ( m->getType() == "cure" && !inventory[ i ] )
        {
            inventory[ i ] = m;
            break ;
        }
    }
}

AMateria* MateriaSource::createMateria( std::string const & type )
{
    for ( int i = 0; i < 4; i++ )
    {
        if ( !inventory[ i ] )
            continue ;
        else if ( type == "ice" && type == inventory[ i ]->getType() )
            return ( new Ice() );
        else if ( type == "cure" && type == inventory[ i ]->getType() )
            return ( new Cure() );
    }
    return ( 0 );
}
