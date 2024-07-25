#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "colors.hpp"

class Animal {
protected:
    std::string type;
    Animal();
    Animal(const Animal&);
    Animal& operator=(const Animal&);

public:
    virtual ~Animal();
    virtual void makeSound() const = 0;
    std::string getType() const;
};

#endif
