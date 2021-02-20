#pragma once

#include <sys/types.h>
#include <exception>
#include <iostream>
#include <vector>
#include <algorithm>

#define		vctIterator std::vector<int>::iterator

class span
{
	private:
		u_int	_N;
		int*	_data;
		u_int	_fill;
		bool	_fullArray;
		span();
	public:
		/*		CF		*/
		span(u_int n);
		span(const span& org);
		span&	operator=(const span& org);
		~span();

		void	addNumber(int input);

		template <class InputIterator>
		void	addNumberRange(InputIterator first, InputIterator end);
		int*	copyData();
		int		shortestSpan();
		int		longestSpan();
		void	display();

		class fullArray : public std::exception {};
};

template <class InputIterator>
void	span::addNumberRange(InputIterator start, InputIterator end) {
	if (_fullArray)
		throw (span::fullArray());
	while (start != end) {
		_data[_fill] = start[0];
		_fill++;
		start++;
		if (_fill == _N) {
			_fullArray = true;
			return;
		}
	}
}
