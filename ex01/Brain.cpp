#include "Brain.hpp"

Brain::Brain(/* args */) {
    print_color("Default Brain constructor called");
    for (int i = 0; i < 100; ++i) { ideas[i] = "This is an idea"; }
}

Brain::Brain(const Brain& src) {
    print_color("Default Brain copy constructor called");
    *this = src;
}

Brain& Brain::operator=(const Brain& src) {
    print_color("Brain Copy assignement operator called");
    for (int i = 0; i < 100; ++i) { ideas[i] = src.ideas[i]; }
    return *this;
}

Brain::~Brain() { print_color("Brain destructor called"); }

std::string Brain::getIdea(int n) {
    if (n >= 0 && n < 100) return ideas[n];
    else return "NotAnIdea";
}
