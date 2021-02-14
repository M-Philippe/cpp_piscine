#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main(){
	Character* moi = new Character("moi");

	std::cout << *moi;

	Enemy*	b = new RadScorpion();

	AWeapon*	pr = new PlasmaRifle();
	AWeapon*	pf = new PowerFist();
	
	moi->equip(pr);
	std::cout << *moi;
	moi->equip(pf);

	moi->attack(b);
	std::cout << *moi;
	moi->equip(pr);
	std::cout << *moi;
	moi->attack(b);
	std::cout << *moi;
	moi->attack(b);
	std::cout << *moi;
	
	delete b;
	delete pr;
	delete pf;
	delete moi;
	return (0);
}

/*
	PlasmaRifle	prl;
	prl.testClass();
	prl.incDamage();
	prl.attack();
	PlasmaRifle prl2 = prl;
	prl2.testClass();
	prl2.attack();

	PowerFist	pwf;
	pwf.attack();

	SuperMutant spm;
	spm.takeDamage(10);
	spm.testClass();

	RadScorpion rdp;
	rdp.takeDamage(1);
	rdp.testClass();
*/