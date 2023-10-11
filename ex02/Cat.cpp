#include "Cat.hpp"

Cat::Cat() : AAnimal()
{
    std::cout << "Calling Cat()" << std::endl;
    type = "Cat";
    brain = new Brain();
}

Cat::Cat( const Cat& obj )
{
    std::cout << "Calling Cat( copy )" << std::endl;
    *this = obj;
}

Cat& Cat::operator=( const Cat& rhs )
{
    if ( this == &rhs )
        return ( *this );

    std::cout << "Calling Cat( operator )" << std::endl;

    brain = new Brain();
    brain->ideas = new std::string [ 100 ];
    for ( int i = 0; i < 100; i++ )
        brain->ideas[ i ] = rhs.brain->ideas[ i ];

    type = rhs.type;

    return ( *this );
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Calling ~Cat()" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}

std::string Cat::getIdea( int idx ) const
{
    if ( idx < 0 || idx > 99)
    {
        std::cout << "error: fatal\n";
        return 0;
    }
    return ( brain->ideas[ idx ] );
}

void Cat::setIdea( const std::string content, int idx)
{
    if ( idx < 0 || idx > 99)
    {
        std::cout << "error: fatal\n";
        return;
    }
    brain->ideas[ idx ] = content;
}