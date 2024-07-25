#include "Animal.hpp"

Animal::Animal() {
    print_color("Default Animal constructor called");
    type = "Unknown animal";
}

Animal::Animal(const Animal& src) {
    print_color("Default Animal copy constructor called");
    *this = src;
}

Animal::~Animal() { print_color("Animal destructor called"); }

Animal& Animal::operator=(const Animal& src) {
    print_color("Animal Copy assignement operator called");
    type = src.getType();
    return *this;
}

void Animal::makeSound() const {
    print_color(ANSI_ITALIC "*Your hear the sound from an unknown animal*");
}

std::string Animal::getType() const { return type; }
