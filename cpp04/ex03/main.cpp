#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int	main(void) {
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

	std::cout << std::endl;

	IMateriaSource* src2 = new MateriaSource();
	src2->learnMateria(new Ice());

	ICharacter* me2 = new Character("me");
	AMateria* tmp2;
	tmp2 = src2->createMateria("ice");
	me2->equip(tmp2);

	ICharacter* bob2 = new Character("bob");
	me2->use(0, *bob2);
	me2->unequip(0);
	me2->use(0, *bob2);

	delete bob2;
	delete me2;
	delete src2;
	delete tmp2;

	return 0;
}
