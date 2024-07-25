#include "WrongCat.hpp"

WrongCat::WrongCat() {
    print_color("Default WrongCat constructor called");
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& src) {
    print_color("Default WrongCat copy constructor called");
    *this = src;
}

WrongCat::~WrongCat() { print_color("WrongCat  destructor called"); }

WrongCat& WrongCat::operator=(const WrongCat& src) {
    print_color("WrongCat Copy assignement operator called");
    type = src.type;
    return *this;
}

void WrongCat::makeSound() const { print_color("Meowwww 🐱🐱"); }
