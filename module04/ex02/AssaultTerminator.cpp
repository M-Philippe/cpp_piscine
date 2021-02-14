#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() {
	std::cout << "* Teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator& org) {
	*this = org;
}

AssaultTerminator&	AssaultTerminator::operator=(const AssaultTerminator* org) {
	(void)org;
	return (*this);
}

AssaultTerminator::~AssaultTerminator() {
	std::cout << "I'll be back" << std::endl;
}

ISpaceMarine*	AssaultTerminator::clone() const {
	ISpaceMarine*	ret = new AssaultTerminator(*this);
	return (ret);
}

void			AssaultTerminator::battleCry() const {
	std::cout << "This code is unclean. Purify it !" << std::endl;
}

void			AssaultTerminator::rangedAttack() const {
	std::cout << "* does nothing *" << std::endl;
}

void			AssaultTerminator::meleeAttack() const {
	std::cout << "* attacks with chainfists *" << std::endl;
}