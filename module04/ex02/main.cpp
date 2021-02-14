#include "TacticalMarine.hpp"
#include "Squad.hpp"

int main() {
	ISquad*	vlc = new Squad;
	std::cout << vlc->getCount() << std::endl;
	ISpaceMarine* bob = new TacticalMarine(10);
	ISpaceMarine* jim = new TacticalMarine(50);
	vlc->push(bob);
	vlc->push(jim);
	vlc->push(bob);
	std::cout << vlc->getCount() << std::endl;
	ISpaceMarine* tmp = vlc->getUnit(1);
	if (tmp)
		std::cout << tmp->getId() << std::endl;
	delete vlc;
}