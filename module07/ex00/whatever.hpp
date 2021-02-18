#pragma once

#include <iostream>

template <class tpl>
tpl max (tpl a, tpl b) {
	return (a > b ? a : b);
}

template <class tpl>
tpl min (tpl a, tpl b) {
	return (a < b ? a : b);
}

template <class tpl>
void swap (tpl& a, tpl& b) {
	tpl	tmp = a;
	a = b;
	b = tmp;
}