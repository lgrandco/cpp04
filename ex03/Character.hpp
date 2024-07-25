#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : virtual public ICharacter {
private:
    AMateria* inv[4];
    std::string name;

public:
    Character();
    Character(std::string);
    Character(const Character&);
    Character& operator=(const Character&);
    ~Character();
    std::string const& getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};

#endif // !CHARACTER_HPP
