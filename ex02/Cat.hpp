#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : virtual public Animal {
private:
    Brain* brain;

public:
    Cat();
    Cat(const Cat&);
    Cat& operator=(const Cat&);
    ~Cat();
    void makeSound() const;
    std::string getIdea(int);
};

#endif
