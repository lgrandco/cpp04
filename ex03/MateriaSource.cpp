#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    //  print_color("Default MateriaSource constructor called");
    for (int i = 0; i < 4; ++i) inv[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& src) {
    //  print_color("Default MateriaSource copy constructor called");
    for (int i = 0; i < 4; ++i) inv[i] = NULL;
    *this = src;
}

MateriaSource::~MateriaSource() { // print_color("MateriaSource destructor called");
    for (int i = 0; i < 4; ++i) { delete inv[i]; }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& src) {
    // print_color("MateriaSource Copy assignement operator called");
    for (int i = 0; i < 4; ++i) {
        delete inv[i];
        inv[i] = NULL;
        if (src.inv[i]) inv[i] = src.inv[i]->clone();
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* newMateria) {
    if (newMateria == NULL) {
        print_color("Could not learn materia, inexistant one");
        return;
    }
    int i;
    for (i = 0; i < 4 && inv[i] != NULL; ++i);
    if (i == 4) print_color("Could not learn Materia, can learn at most 4");
    else {
        print_color("Successfully learnt " + newMateria->getType());
        inv[i] = newMateria;
    }
}

AMateria* MateriaSource::createMateria(std::string const& type) {
    if (type == "ice") {
        return new Ice();
    } else if (type == "cure") {
        return new Cure();
    } else return NULL;
}
