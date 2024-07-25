#include "Cat.hpp"
#include "Dog.hpp"

int main() {
    try {
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound(); // will output the cat sound!
        j->makeSound();
        delete j;
        delete i;

        print_color("\nEx01-----------------------------------\n");

        Animal* array[10];
        for (int i = 0; i < 5; ++i) array[i] = new Dog();
        print_color("\nsecond half\n");
        for (int i = 5; i < 10; ++i) array[i] = new Cat();
        for (int i = 0; i < 10; ++i) delete array[i];

        print_color("\ndeep copy test\n");
        Cat* cat = new Cat();
        print_color(cat->getIdea(40));
        Cat* cpy = new Cat(*cat);
        delete cat;
        print_color(cpy->getIdea(0));
        delete cpy;

    } catch (const std::bad_alloc& e) {
        std::cerr << "Memory allocation failed: " << e.what() << std::endl;
    } catch (const std::exception& e) { std::cerr << e.what() << std::endl; } catch (...) {
        std::cerr << "Unknown exception caught" << std::endl;
    }

    return 0;
}
