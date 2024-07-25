#include "Cat.hpp"

Cat::Cat() {
    print_color("Default Cat constructor called");
    type = "Cat";
}

Cat::Cat(const Cat& src) {
    print_color("Default Cat copy constructor called");
    *this = src;
}

Cat::~Cat() { print_color("Cat destructor called"); }

Cat& Cat::operator=(const Cat& src) {
    print_color("Cat Copy assignement operator called");
    type = src.type;
    return *this;
}

void Cat::makeSound() const { print_color("Meowwww 🐱🐱"); }
