#pragma once

#include <stack>
#include <iterator>

template <typename T, typename Container = std::deque<T> >
class mutantstack : public std::stack<T, Container>
{
	private:
	public:
		mutantstack() {};
		typedef typename std::stack<T, Container>::container_type::iterator iterator;
		iterator	begin() { return (std::stack<T, Container>::c.begin()); }
		iterator	end() { return (std::stack<T, Container>::c.end()); }
};