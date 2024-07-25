#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    print_color("Default WrongAnimal constructor called");
    type = "Unknown Wronganimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& src) {
    print_color("Default WrongAnimal copy constructor called");
    *this = src;
}

WrongAnimal::~WrongAnimal() { print_color("WrongAnimal  destructor called"); }

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src) {
    print_color("WrongAnimal Copy assignement operator called");
    type = src.getType();
    return *this;
}

void WrongAnimal::makeSound() const {
    print_color(ANSI_ITALIC "*Your hear the sound from an unknown wrong animal*" ANSI_RESET);
}

std::string WrongAnimal::getType() const { return type; }
