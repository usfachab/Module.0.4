#include "Animal.hpp"

Animal::Animal() : type ( "Animal" )
{
    std::cout << "Calling Animal()" << std::endl;
}

Animal::Animal( std::string aType ) : type ( aType )
{
    std::cout << "Calling Animal( param )" << std::endl;
}

Animal::Animal( const Animal& obj ) : type ( obj.type )
{
    std::cout << "Calling Animal( copy )" << std::endl;
}

Animal& Animal::operator=( const Animal& rhs )
{
    std::cout << "Calling Animal( operator )" << std::endl;
    type = rhs.type;
    return ( *this );
}

Animal::~Animal()
{
    std::cout << "Calling ~Animal()" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "???" << std::endl;
}

std::string Animal::getType() const 
{
    return ( type );
}