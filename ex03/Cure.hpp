#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : virtual public AMateria {
private:
    /* data */
public:
    Cure();
    Cure(const Cure&);
    Cure& operator=(const Cure&);
    ~Cure();
    AMateria* clone() const;
};

#endif
