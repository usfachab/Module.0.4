#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
private:
    Brain* brain;
public:
    Dog();
    Dog( const Dog& );
    Dog& operator=( const Dog& );
    ~Dog();

    void makeSound() const;
    std::string getIdea( int ) const;
    void setIdea( const std::string, int );
};

#endif