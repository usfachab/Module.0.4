#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    Dog a;
    a.setIdea( "Bones", 0 );
    std::cout << "Type: " << a.getType() << std::endl;
    std::cout << "Idea: " << a.getIdea( 0 ) << std::endl;
    std::cout << "\n";
    Dog b = a;
    std::cout << "\n";
    std::cout << "Type: " << b.getType() << std::endl;
    std::cout << "Idea: " << b.getIdea( 0 ) << std::endl;

    Cat c;
    c.setIdea( "Fish", 0 );
    std::cout << "\n";
    std::cout << "Type: " << c.getType() << std::endl;
    std::cout << "Idea: " << c.getIdea( 0 ) << std::endl;

    // !const Animal* an = new Animal();

    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    delete i;
    delete j;//should not create a leak

    return 0;
}