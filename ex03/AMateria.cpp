#include "AMateria.hpp"

AMateria::AMateria() : type("Unknown type") { // print_color("Default AMateria constructor called");
}

AMateria::AMateria(std::string const& type) : type(type) {
    //    print_color("Default AMateria constructor called");
}

AMateria::AMateria(const AMateria& src) {
    // print_color("Default AMateria copy constructor called");
    *this = src;
}

AMateria::~AMateria() { // print_color("AMateria destructor called");
}

AMateria& AMateria::operator=(const AMateria& src) {
    //    print_color("AMateria Copy assignement operator called");
    type = src.type;
    return *this;
}

void AMateria::use(ICharacter& target) {
    if (type == "ice") print_color("* shoots an ice bolt at " + target.getName() + " *");
    else if (type == "cure") print_color("* heals " + target.getName() + "'s wounds *");
}

std::string const& AMateria::getType() const { return type; }
