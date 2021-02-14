#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() {
	std::cout << "Tactical Marine ready for action!" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine& org) {
	*this = org;
}

TacticalMarine&	TacticalMarine::operator=(const TacticalMarine* org) {
	(void)org;
	return (*this);
}

TacticalMarine::~TacticalMarine() {
	std::cout << "Aaargh..." << std::endl;
}

ISpaceMarine*	TacticalMarine::clone() const {
	ISpaceMarine*	ret = new TacticalMarine(*this);
	return (ret);
}

void			TacticalMarine::battleCry() const {
	std::cout << "For the Holy PLOT!" << std::endl;
}

void			TacticalMarine::rangedAttack() const {
	std::cout << "* attacks with a bolter *" << std::endl;
}

void			TacticalMarine::meleeAttack() const {
	std::cout << "* attacks with a chainsword *" << std::endl;
}