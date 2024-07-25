#ifndef WRONGWrongANIMAL_HPP
#define WRONGWrongANIMAL_HPP

#include "colors.hpp"

class WrongAnimal {
protected:
    std::string type;

public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal&);
    WrongAnimal& operator=(const WrongAnimal&);
    virtual ~WrongAnimal();
    void makeSound() const;
    std::string getType() const;
};

#endif
