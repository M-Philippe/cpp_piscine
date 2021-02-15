#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	_lst = new AMateria*[learnMax];
	_nMateria = 0;
	for (int i = 0; i < learnMax; i++) {
		_lst[i] = NULL;
	}
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < learnMax; i++) {
		if (_lst[i])
			delete _lst[i];
	}
	delete[] _lst;
}

void		MateriaSource::learnMateria(AMateria* m) {
	if (_nMateria == learnMax || !m)
		return ;
	_lst[_nMateria] = m;
	_nMateria++;
}

AMateria*	MateriaSource::createMateria(std::string const& type) {
	for (int i = 0; i < _nMateria; i++) {
		if (type == _lst[i]->getType())
			return (_lst[i]->clone());
	}
	return (NULL);
}