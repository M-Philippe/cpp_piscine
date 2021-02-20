#include "span.hpp"

/*			Canonical Form	*/

span::span() {}

span::span(u_int n) {
	_N = n;
	_fill = 0;
	_data = new int[_N];
	_fullArray = false;
}

span::~span() { delete[] _data; }

/*			***				*/

void	span::addNumber(int input) {
	if (_fullArray)
		throw (span::fullArray());
	_data[_fill] = input;
	_fill++;
	if (_fill == _N)
		_fullArray = true;
}

int*	span::copyData() {
	int*	ret = 0;

	ret = new int[_N];
	for (u_int i = 0; i < _fill; i++) {
		ret[i] = _data[i];
	}
	return (ret);
}

int		span::shortestSpan() {
	if (_fill == 0 || _fill == 1)
		return (0);
	int*	tmp = copyData();
	int		diff = 0;
	int		prev = 0;

	std::sort(tmp, tmp + _fill);
	diff = tmp[1] - tmp[0];
	prev = tmp[0];
	for (u_int i = 1; i < _fill; i++) {
		if (diff > tmp[i] - prev) {
			diff = tmp[i] - prev;
			//std::cout << "[" << tmp[i] << ";" << prev << "] = " << diff << std::endl;
		}
		prev = tmp[i];
	}
	delete[] tmp;
	return (diff);
}

int		span::longestSpan() {
	if (_fill == 0 || _fill == 1)
		return (0);
	int*	tmp = copyData();
	std::sort(tmp, tmp + _fill);
	int		diff = tmp[_fill-1] - tmp[0];
	std::cout << "[" << tmp[_fill-1] << ";" << tmp[0] << "] = " << diff << std::endl;
	delete[] tmp;
	return (diff);	
}

void	span::display() {
	for (u_int i = 0; i < _fill; i++) {
		std::cout << _data[i] << std::endl;
	}
}