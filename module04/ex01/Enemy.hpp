#pragma once

#include <iostream>

/*
**	Default constructor
**	Copy constructor
**	Operator =
**	Destructor
*/

/*
**		REMOVE TESTCLASS IN BOTH ABSTRACT CLASS
*/

class Enemy
{
	private:
		int			_hp;
		std::string	_type;
	public:
		Enemy();
		Enemy(int hp, std::string const& type);
		Enemy(const Enemy& org);
		Enemy&	operator=(const Enemy& org);
		virtual ~Enemy();
		int					getHp() const;
		std::string	virtual	getType() const;
		virtual void		takeDamage(int atkDmg);
		void				testClass();
};
