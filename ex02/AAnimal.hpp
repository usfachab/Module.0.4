#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class AAnimal
{
protected:
    std::string type;
public:
    AAnimal();
    AAnimal( const std::string );
    AAnimal( const AAnimal& );
    AAnimal& operator=( const AAnimal& );
    virtual ~AAnimal();

    virtual void makeSound() const = 0;
    virtual std::string getType() const;
};

#endif