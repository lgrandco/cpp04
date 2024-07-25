#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : virtual public IMateriaSource {
private:
    AMateria* inv[4];

public:
    MateriaSource();
    MateriaSource(const MateriaSource&);
    MateriaSource& operator=(const MateriaSource&);
    ~MateriaSource();
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const&);
};

#endif // !MATERIA_SOURCE_HPP
