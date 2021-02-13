#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion& org) {
	*this = org;
}

RadScorpion&	RadScorpion::operator=(const RadScorpion& org) {
	this->Enemy::operator=(org);
	return (*this);
}

RadScorpion::~RadScorpion(){
	std::cout << "* SPROTCH *" << std::endl;
}
