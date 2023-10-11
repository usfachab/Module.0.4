#include "Character.hpp"

Character::Character() : name("Default")
{
    std::cout << "Calling Character()" << std::endl;
    link = new Linked();
    for (int i = 0; i < 4; i++)
        inventory[i] = 0;
}

Character::Character(std::string const cName) : name(cName)
{
    // std::cout << "Calling Character( param )" << std::endl;
    link = new Linked();
    for (int i = 0; i < 4; i++)
        inventory[i] = 0;
}

Character::~Character()
{
    for ( int i = 3; i >= 0; i-- )
    {
        if ( inventory[ i ] )
            delete inventory[ i ];
    }
    delete link;
    // std::cout << "Calling ~Character()" << std::endl;
}

Character::Character(const Character &obj)
{
    // std::cout << "Calling Character( copy )" << std::endl;
    *this = obj;
}

Character &Character::operator=(const Character &lhs)
{
    // std::cout << "Calling Character( operator )" << std::endl;
    name = lhs.name;
    for (int i = 0; i < 4; i++)
    {
        if (lhs.inventory[i] == 0)
            continue;
        if (lhs.inventory[i]->getType() == "ice")
            inventory[i] = new Ice();
        else if (lhs.inventory[i]->getType() == "cure")
            inventory[i] = new Ice();
        else
            inventory[i] = 0;
    }
    return (*this);
}

std::string const &Character::getName() const
{
    return (name);
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if ( !inventory[i] )
        {
            if ( m && m->getType() == "ice" )
            {
                inventory[i] = new Ice();
                delete m;
            }
            else if ( m && m->getType() == "cure" )
            {
                inventory[i] = new Cure();
                delete m;
            }
            break;
        }
    }
}

void Character::unequip(int idx)
{
    // std::cout << "Calling Character::unequip( idx )" << std::endl;
    if ( idx < 0 || idx > 3 )
        return;
    if ( inventory [ idx ] )
    {
        link->pushBack( inventory [ idx ] );
        inventory [ idx ] = NULL;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if ( idx < 0 || idx > 3 )
        return;
    if ( inventory [ idx ] )
        this->inventory [ idx ]->use( target );
}
