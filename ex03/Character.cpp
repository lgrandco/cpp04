#include "Character.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

Character::Character() : name("Default name") {
    // print_color("Default Character constructor called");
    for (int i = 0; i < 4; ++i) inv[i] = NULL;
}

Character::Character(std::string name) : name(name) {
    // print_color("Default Character constructor called");
    for (int i = 0; i < 4; ++i) inv[i] = NULL;
}

Character::Character(const Character& src) {
    // print_color("Default Character copy constructor called");
    for (int i = 0; i < 4; ++i) inv[i] = NULL;
    *this = src;
}

Character::~Character() { // print_color("Character destructor called");
    for (int i = 0; i < 4; ++i) { delete inv[i]; }
}

Character& Character::operator=(const Character& src) {
    // print_color("Character Copy assignement operator called");
    name = src.name;
    for (int i = 0; i < 4; ++i) {
        delete inv[i];
        inv[i] = NULL;
        if (src.inv[i]) inv[i] = src.inv[i]->clone();
    }
    return *this;
}

std::string const& Character::getName() const { return name; }

void Character::equip(AMateria* m) {
    if (!m) {
        print_color("Could not equip item, inexistant type");
        return;
    }
    int i;
    for (i = 0; i < 4 && inv[i] != NULL; ++i) {
        if (inv[i] == m) {
            print_color("Cannot equip the same instance of an object twice");
            return;
        }
    }
    if (i == 4) print_color("Could equid item, inventory full");
    else {
        print_color(name + " successfully equipped " + m->getType());
        inv[i] = m;
    }
}

void Character::unequip(int idx) {
    if (idx < 0 || idx > 3) print_color("Invalid index");
    else if (inv[idx] == NULL) print_color("No item to unequip at the requested index");
    else {
        print_color(name + " sucessfuly unquipped item");
        inv[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target) {
    if (idx < 0 || idx > 3) print_color("Invalid index");
    else if (inv[idx] == NULL) print_color("No item to use at the requested index");
    else { inv[idx]->use(target); }
}
