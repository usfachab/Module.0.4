#include "Dog.hpp"

Dog::Dog() : AAnimal()
{
    std::cout << "Calling Dog()" << std::endl;
    type = "Dog";
    brain = new Brain();
}

Dog::Dog( const Dog& obj )
{
    std::cout << "Calling Dog( copy )" << std::endl;
    *this = obj;
}

Dog& Dog::operator=( const Dog& rhs )
{
    if ( this == &rhs )
        return ( *this );

    std::cout << "Calling Dog( operator )" << std::endl;

    brain = new Brain();
    for ( int i = 0; i < 100; i++ )
        brain->ideas[ i ] = rhs.brain->ideas[ i ];

    type = rhs.type;

    return ( *this );
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Calling ~Dog()" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Bark" << std::endl;
}

std::string Dog::getIdea( int idx ) const
{
    if ( idx < 0 || idx > 99 )
    {
        std::cout << "error: fatal\n";
        return 0;
    }
    return ( brain->ideas[ idx ] );
}

void Dog::setIdea( const std::string content, int idx)
{
    if ( idx < 0 || idx > 99)
    {
        std::cout << "error: fatal\n";
        return;
    }
    brain->ideas[ idx ] = content;
}