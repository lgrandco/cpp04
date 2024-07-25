#include "Cure.hpp"

Cure::Cure() {
    // print_color("Default Cure constructor called");
    type = "cure";
}

Cure::Cure(const Cure& src) {
    // print_color("Default Cure copy constructor called");
    *this = src;
}

Cure::~Cure() { // print_color("Cure destructor called");
}

Cure& Cure::operator=(const Cure& src) {
    // print_color("Cure Copy assignement operator called");
    type = src.type;
    return *this;
}

AMateria* Cure::clone() const { return new Cure(); }
