#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "colors.hpp"

class Animal {
protected:
    std::string type;

public:
    Animal();
    Animal(const Animal&);
    Animal& operator=(const Animal&);
    virtual ~Animal();
    virtual void makeSound() const;
    std::string getType() const;
};

#endif
