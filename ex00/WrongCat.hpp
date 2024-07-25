#ifndef WRONGWrongCAT_HPP
#define WRONGWrongCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal {
public:
    WrongCat();
    WrongCat(const WrongCat&);
    WrongCat& operator=(const WrongCat&);
    ~WrongCat();
    void makeSound() const;
};

#endif
