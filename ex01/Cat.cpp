#include "Cat.hpp"

Cat::Cat() : brain(new Brain()) {
    print_color("Default Cat constructor called");
    type = "Cat";
}

Cat::Cat(const Cat& src) : brain(new Brain()) {
    print_color("Default Cat copy constructor called");
    *this = src;
}

Cat::~Cat() {
    print_color("Cat destructor called");
    delete brain;
}

Cat& Cat::operator=(const Cat& src) {
    print_color("Cat Copy assignement operator called");
    type = src.type;
    *brain = *src.brain;
    return *this;
}

void Cat::makeSound() const { print_color("Meowwww 🐱🐱"); }

std::string Cat::getIdea(int n) { return brain->getIdea(n); }
