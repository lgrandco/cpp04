#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : virtual public Animal {
private:
    Brain* brain;

public:
    Dog();
    Dog(const Dog&);
    Dog& operator=(const Dog&);
    ~Dog();
    void makeSound() const;
    std::string getIdea(int);
};

#endif
