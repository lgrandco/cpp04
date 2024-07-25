#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
#include "colors.hpp"
#include <iostream>

class ICharacter;

class AMateria {
protected:
    std::string type;

public:
    AMateria();
    AMateria(const AMateria&);
    AMateria& operator=(const AMateria&);
    AMateria(std::string const& type);
    virtual ~AMateria();
    std::string const& getType() const; // Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif
