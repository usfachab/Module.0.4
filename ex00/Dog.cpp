#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Calling Dog()" << std::endl;
    type = "Dog";
}

Dog::Dog( const Dog& obj ) : Animal ( obj )
{
    std::cout << "Calling Dog( copy )" << std::endl;
}

Dog& Dog::operator=( const Dog& rhs )
{
    std::cout << "Calling Dog( operator )" << std::endl;
    type = rhs.type;
    return ( *this );
}

Dog::~Dog()
{
    std::cout << "Calling ~Dog()" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Bark" << std::endl;
}