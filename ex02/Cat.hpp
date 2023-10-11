#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>

#include "AAnimal.hpp"
#include "Brain.hpp"

class Animal;

class Cat : public AAnimal
{
private:
    Brain* brain;
public:
    Cat();
    Cat( const Cat& );
    Cat& operator=( const Cat& );
    ~Cat();

    void makeSound() const;
    std::string getIdea( int ) const;
    void setIdea( const std::string, int );
};

#endif