#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain {
private:
    std::string ideas[100];

public:
    Brain(/* args */);
    ~Brain();
    Brain(const Brain&);
    Brain& operator=(const Brain&);
    std::string getIdea(int);
};

#endif
