#include "Dog.hpp"

Dog::Dog() : brain(new Brain()) {
    print_color("Default Dog constructor called");
    type = "Dog";
}

Dog::Dog(const Dog& src) : brain(new Brain()) {
    print_color("Default Dog copy constructor called");
    *this = src;
}

Dog::~Dog() {
    print_color("Dog destructor called");
    delete brain;
}

Dog& Dog::operator=(const Dog& src) {
    print_color("Dog Copy assignement operator called");
    type = src.type;
    *brain = *src.brain;
    return *this;
}

void Dog::makeSound() const { print_color("BARK BARK 🐶🐶"); }

std::string Dog::getIdea(int n) { return brain->getIdea(n); }
