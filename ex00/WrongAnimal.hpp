#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal( const std::string );
    WrongAnimal( const WrongAnimal& );
    WrongAnimal& operator=( const WrongAnimal& );
    virtual ~WrongAnimal();

    void makeSound() const;
    virtual std::string getType() const;
};

#endif