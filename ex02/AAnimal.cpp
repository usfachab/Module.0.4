#include "AAnimal.hpp"

AAnimal::AAnimal() : type ( "Animal" )
{
    std::cout << "Calling Animal()" << std::endl;
}

AAnimal::AAnimal( std::string aType ) : type ( aType )
{
    std::cout << "Calling Animal( param )" << std::endl;
}

AAnimal::AAnimal( const AAnimal& obj ) : type ( obj.type )
{
    std::cout << "Calling Animal( copy )" << std::endl;
}

AAnimal& AAnimal::operator=( const AAnimal& rhs )
{
    std::cout << "Calling Animal( operator )" << std::endl;
    type = rhs.type;
    return ( *this );
}

AAnimal::~AAnimal()
{
    std::cout << "Calling ~Animal()" << std::endl;
}

void AAnimal::makeSound() const
{
    std::cout << "???" << std::endl;
}

std::string AAnimal::getType() const 
{
    return ( type );
}