template <typename tpl>
void tFct(tpl& i) {
	++i;
}

template <typename T, typename D>
void	iter(T arr, size_t len, D pFct) {
	for (size_t i = 0; i < len; i++) {
		pFct(arr[i]);
	}
}