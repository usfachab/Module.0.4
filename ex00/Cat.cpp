#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Calling Cat()" << std::endl;
    type = "Cat";
}

Cat::Cat( const Cat& obj ) : Animal ( obj )
{
    std::cout << "Calling Cat( copy )" << std::endl;
}

Cat& Cat::operator=( const Cat& rhs )
{
    std::cout << "Calling Cat( operator )" << std::endl;
    type = rhs.type;
    return ( *this );
}

Cat::~Cat()
{
    std::cout << "Calling ~Cat()" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}