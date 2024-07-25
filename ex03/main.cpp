#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main() {
    try {
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        ICharacter* me = new Character("me");
        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        ICharacter* bob = new Character("bob");
        me->use(0, *bob);
        me->use(1, *bob);
        delete bob;
        delete me;
        delete src;

        print_color("\nDEEP COPY TEST FOR CHARACTER --------------------------\n");

        Cure* materia = new Cure();
        AMateria* cureCpy = new Cure(*materia);
        delete materia;
        Character* original = new Character("original");
        original->equip(cureCpy);
        Character* charCpy = new Character(*original);
        delete original;
        charCpy->use(0, *charCpy);
        delete charCpy;

        print_color("\nFUNCTION TESTS --------------------------\n");

        src = new MateriaSource();
        src->learnMateria(src->createMateria("ifsjdifsd"));
        src->learnMateria(new Cure());
        src->learnMateria(new Ice());
        src->learnMateria(new Ice());
        me = new Character("me");
        tmp = src->createMateria("not a materia");
        me->equip(tmp);
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        bob = new Character("bob");
        me->use(0, *bob);
        me->unequip(1);
        me->unequip(1);
        me->unequip(4);
        delete tmp;
        me->use(1, *bob);
        delete bob;
        delete me;
        delete src;
    } catch (const std::bad_alloc& e) {
        std::cerr << "Memory allocation failed: " << e.what() << std::endl;
    } catch (const std::exception& e) { std::cerr << e.what() << std::endl; } catch (...) {
        std::cerr << "Unknown exception caught" << std::endl;
    }

    return 0;
}
