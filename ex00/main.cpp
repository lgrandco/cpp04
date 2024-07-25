#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;

    print_color("\nWrong animal tests -----------------------------------\n");
    const WrongAnimal* Wrongmeta = new WrongAnimal();
    const WrongAnimal* Wrongi = new WrongCat();
    std::cout << Wrongi->getType() << " " << std::endl;
    Wrongi->makeSound(); // will output the WrongAnimal sound!
    Wrongmeta->makeSound();
    delete Wrongmeta;
    delete Wrongi;
    return 0;
}
