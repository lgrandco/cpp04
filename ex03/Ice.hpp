#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : virtual public AMateria {
private:
    /* data */
public:
    Ice();
    Ice(const Ice&);
    Ice& operator=(const Ice&);
    ~Ice();
    AMateria* clone() const;
};

#endif
