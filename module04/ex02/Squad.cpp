#include "Squad.hpp"

Squad::Squad() {
	_nbUnits = 0;
	_squad = NULL;
}

Squad::~Squad() {
	for (int i = 0; i < _nbUnits; i++) {
		delete _squad[i];
	}
	delete[] _squad;
}

int		Squad::getCount() const {
	return (_nbUnits);
}

ISpaceMarine*	Squad::getUnit(int n) const {
	if (n < 0 || n > _nbUnits)
		return (NULL);
	return (_squad[n]);
}

bool			Squad::isAlreadyInSquad(ISpaceMarine* src) const {
	for (int i = 0; i < _nbUnits; i++) {
		if (_squad[i] == src)
			return (false);
	}
	return (true);
}

/*	Return -1 if an error occured	*/
int				Squad::push(ISpaceMarine* src) {
	if (!src || !isAlreadyInSquad(src))
		return (-1);
	ISpaceMarine**	tmp = _squad;
	_squad = new ISpaceMarine*[_nbUnits+1];
	for (int i = 0; i < _nbUnits; i++){
		_squad[i] = tmp[i];
	}
	_squad[_nbUnits] = src;
	delete[] tmp;
	_nbUnits++;
	return (_nbUnits);
}