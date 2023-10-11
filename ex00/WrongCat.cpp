#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "Calling WrongCat()" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat& obj ) : WrongAnimal ( obj )
{
    std::cout << "Calling WrongCat( copy )" << std::endl;
}

WrongCat& WrongCat::operator=( const WrongCat& rhs )
{
    std::cout << "Calling WrongCat( operator )" << std::endl;
    type = rhs.type;
    return ( *this );
}

WrongCat::~WrongCat()
{
    std::cout << "Calling ~WrongCat()" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}