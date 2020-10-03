#include <Account.class.hpp>

Account::Account(int initial_deposit)
{
	this->_nbAccounts++;
	this->_accountIndex = this->_nbAccounts;
	this->_amount = initial_deposit;
}

Account::~Account(void)
{
}

int	Account::getNbAccounts(void)
{
	return _nbAccounts;
}