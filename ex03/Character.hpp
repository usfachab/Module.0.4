#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "Linked.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class Character : public ICharacter
{
private:
    std::string name;
    AMateria *inventory[4];
    Linked* link;

public:
    Character();
    Character(std::string const);
    Character(const Character &);
    Character &operator=(const Character &);
    ~Character();

    std::string const &getName() const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};

#endif