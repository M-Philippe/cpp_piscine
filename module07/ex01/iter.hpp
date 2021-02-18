template <typename tpl>
tpl	tFct(tpl i) {
	return (++i);
}

template <typename T, typename L, typename D>
void	iter(T arr, L len, D pFct) {
	for (int i = 0; i < len; i++) {
		arr[i] = pFct(arr[i]);
	}
}