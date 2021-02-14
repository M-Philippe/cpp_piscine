#include "Squad.hpp"

Squad::Squad() {
	for (int i = 0; i < MAX_STACK; i++) {
		_arr[i] = NULL;
	}
	_top = 0;
}

Squad::~Squad() {}

int		Squad::getCount() const {
	return (_top);
}

ISpaceMarine*	Squad::getUnit(int n) const {
	if (n < 0 || n > _top)
		return (NULL);
	std::cout << "Inside " << &_arr[n] << std::endl;
	return (_arr[n]);
}

bool			Squad::isAlreadyInSquad(ISpaceMarine* src) const {
	std::cout << "***" << std::endl;
	std::cout << &src << std::endl;
	for (int i = 0; i <= _top; i++) {
		std::cout << "% " << &_arr[i] << std::endl;
	}
	std::cout << "***" << std::endl;
	return (false);
}

/*	Return -1 if an error occured	*/
int				Squad::push(ISpaceMarine* src) {
	if (!src || !isAlreadyInSquad(src))
		return (-1);
	_arr[_top] = src;
	if (&_arr[_top] == &src)
		std::cout << "HERE" << std::endl;
	_top++;	
	return (getCount());
}