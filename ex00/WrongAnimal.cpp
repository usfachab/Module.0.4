#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type ( "WrongAnimal" )
{
    std::cout << "Calling WrongAnimal()" << std::endl;
}

WrongAnimal::WrongAnimal( std::string aType ) : type ( aType )
{
    std::cout << "Calling WrongAnimal( param )" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& obj ) : type ( obj.type )
{
    std::cout << "Calling WrongAnimal( copy )" << std::endl;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& rhs )
{
    std::cout << "Calling WrongAnimal( operator )" << std::endl;
    type = rhs.type;
    return ( *this );
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Calling ~WrongAnimal()" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "???" << std::endl;
}

std::string WrongAnimal::getType() const 
{
    return ( type );
}