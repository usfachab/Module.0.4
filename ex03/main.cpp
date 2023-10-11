#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Character.hpp"

int main()
{
    MateriaSource* src = new MateriaSource();
    src->learnMateria( new Ice() );
    src->learnMateria( new Cure() );
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    // me->unequip( 0 );
    tmp = src->createMateria("cure");
    me->equip(tmp);
    // me->unequip( 1 );
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;

    return 0;
}