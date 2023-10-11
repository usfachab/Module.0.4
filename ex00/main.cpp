#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const WrongAnimal* wc = new WrongCat();

    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << std::endl;
    std::cout << wc->getType() << " " << std::endl;
    wc->makeSound(); //will output the Animal sound!

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