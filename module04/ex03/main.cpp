#include "AMateria.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
// tmp
#include "Ice.hpp"
#include "Cure.hpp"

int	main() {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* moi = new Character("moi");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	moi->equip(tmp);
	tmp = src->createMateria("cure");
	moi->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	moi->use(0, *bob);
	moi->use(1, *bob);

	delete bob;
	delete moi;
	delete src;
	return 0;
}

/*int main()
{
	//IMateriaSource* src = new MateriaSource();
	//src->learnMateria(new Ice());
	//src->learnMateria(new Cure());
	ICharacter* moi = new Character("moi");
	//AMateria* tmp;
	AMateria* tmp = new Ice;
	AMateria* tmp1 = new Cure;
	//tmp = src->createMateria("ice");
	moi->equip(tmp);
	//tmp = src->createMateria("cure");
	moi->equip(tmp);
	ICharacter* bob = new Character("bob");
	moi->use(0, *bob);
	moi->equip(tmp1);
	AMateria* tmp2 = tmp->clone();
	moi->equip(tmp2);
	for (int i = 0; i < MaxMateria; i++) {
		moi->use(i, *bob);
	}
//moi->use(0, *bob);
//moi->use(1, *bob);
	ICharacter* moi1 = moi;
	for (int i = 0; i < MaxMateria; i++) {
		moi1->use(i, *bob);
	}
	delete bob;
	delete moi;
	//delete moi1;
	//delete src;
	return 0;
}*/