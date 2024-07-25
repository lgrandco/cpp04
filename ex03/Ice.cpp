#include "Ice.hpp"

Ice::Ice() {
   // print_color("Default Ice constructor called");
    type = "ice";
}

Ice::Ice(const Ice& src) {
   // print_color("Default Ice copy constructor called");
    *this = src;
}

Ice::~Ice() { //print_color("Ice destructor called");
}

Ice& Ice::operator=(const Ice& src) {
   // print_color("Ice Copy assignement operator called");
    type = src.type;
    return *this;
}

AMateria* Ice::clone() const { return new Ice(); }
