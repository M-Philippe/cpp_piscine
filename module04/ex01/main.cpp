#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"

int main(){
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
	return (0);
}