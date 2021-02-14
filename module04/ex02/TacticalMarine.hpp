#pragma once

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
private:
	int _id;
public:
	TacticalMarine(/* args */);
	TacticalMarine(int id);
	virtual ~TacticalMarine();
	ISpaceMarine*	clone() const {};
	void			battleCry() const {};
	void			rangedAttack() const {};
	void			meleeAttack() const {};
	// TMP
	int				getId() const {return (_id);}
};
