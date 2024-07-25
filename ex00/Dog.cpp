#include "Dog.hpp"

Dog::Dog() {
    print_color("Default Dog constructor called");
    type = "Dog";
}

Dog::Dog(const Dog& src) {
    print_color("Default Dog copy constructor called");
    *this = src;
}

Dog::~Dog() { print_color("Dog destructor called"); }

Dog& Dog::operator=(const Dog& src) {
    print_color("Dog Copy assignement operator called");
    type = src.type;
    return *this;
}

void Dog::makeSound() const { print_color("BARK BARK 🐶🐶"); }
