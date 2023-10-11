#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
     std::cout << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
     std::cout << std::endl;
    std::cout << j->getType() << " " << std::endl;
    j->makeSound();
    std::cout << std::endl;
    std::cout << meta->getType() << " " << std::endl;
    meta->makeSound();
    std::cout << std::endl;

    delete i;
    delete j;
    delete meta;

    return 0;
}