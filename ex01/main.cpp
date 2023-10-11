#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    int size = 10;
    Animal* array[ size ];
    for ( int i = 0; i < size; i++ )
    {
        if ( i < size / 2 )
            array[ i ] = new Dog();
        else
            array[ i ] = new Cat();
    }
    for ( int i = 0; i < size; i++ )
    {
        std::cout << "Type: " << array[i]->getType() << std::endl;
        delete array[ i ];
    }

    system ( "leaks a.out" );
    
    // system ( "leaks a.out" );
    // Dog a;
    // a.setIdea( "Bones", 0 );
    // std::cout << "Type: " << a.getType() << std::endl;
    // std::cout << "Idea: " << a.getIdea( 0 ) << std::endl;
    // std::cout << "\n";
    // Dog b = a;
    // std::cout << "\n";
    // std::cout << "Type: " << b.getType() << std::endl;
    // std::cout << "Idea: " << b.getIdea( 0 ) << std::endl;

    // Cat c;
    // c.setIdea( "Fish", 0 );
    // std::cout << "\n";
    // std::cout << "Type: " << c.getType() << std::endl;
    // std::cout << "Idea: " << c.getIdea( 0 ) << std::endl;

    // const Animal* j = new Dog();
    // const Animal* i = new Cat();

    // delete i;
    // delete j;//should not create a leak

    return 0;
}