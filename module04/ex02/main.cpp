#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main() {
	ISquad*	vlc = new Squad;
	std::cout << vlc->getCount() << std::endl;
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new TacticalMarine;
	std::cout << vlc->push(bob) << std::endl;
	std::cout << vlc->push(jim) << std::endl;
	ISpaceMarine* rog = new AssaultTerminator;
	ISpaceMarine* rag = new AssaultTerminator;
	std::cout << vlc->push(rog) << std::endl;
	std::cout << vlc->push(rag) << std::endl;
	std::cout << vlc->push(rog) << std::endl;
	std::cout << vlc->push(bob) << std::endl;
	delete vlc;
}