#include "Character.hpp"

Character::Character() {
	_name = "Random";
	_nbMateria = 0;
	_inventory = new AMateria*[MaxMateria];
	for (int i = 0; i < MaxMateria; i++) {
		_inventory[i] = NULL;
	}
}

Character::Character(const std::string& name) {
	_name = name;
	_nbMateria = 0;
	_inventory = new AMateria*[MaxMateria];
	for (int i = 0; i < MaxMateria; i++) {
		_inventory[i] = NULL;
	}
}

Character::Character(const Character& org) {
	*this = org;
}

Character&	Character::operator=(const Character& org) {
	if (_inventory)
		deleteInventory();
	_name = org._name;
	_nbMateria = org._nbMateria;
	_inventory = new AMateria*[MaxMateria];
	for (int i = 0; i < MaxMateria; i++) {
		if (org._inventory[i])
			_inventory[i] = org._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
	return (*this);
}

Character::~Character() {
	deleteInventory();
}

void		Character::deleteInventory() {
	for (int i = 0; i < _nbMateria; i++) {
		delete _inventory[i];
	}
	delete[]	_inventory;
}

std::string const&	Character::getName() const {
	return (_name);
}

void	Character::equip(AMateria* m) {
	if (_nbMateria == MaxMateria || !m)
		return;
	for (int i = 0; i < _nbMateria; i++) {
		if (_inventory[i] == m)
			return;
	}
	_inventory[_nbMateria] = m;
	_nbMateria++;
}

void	Character::unequip(int idx) {
	if (idx < 0 || idx >= MaxMateria)
		return;
	_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx >= _nbMateria)
		return;
	_inventory[idx]->use(target);
}