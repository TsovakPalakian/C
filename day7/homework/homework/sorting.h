template<typename T>
void bubble_sort_asc(T *p);
template<typename T>
void bubble_sort_desc(T *p);
template<typename T>
void shaker_sort_asc(T *p);
template<typename T>
void shaker_sort_desc(T *p);
template<typename T>
void simple_selection_sort_asc(T *p);
template<typename T>
void insertion_sort(T *p, int to);
template<typename T>
void shell_sort_with_sedgewick_series(T *p);
template<typename T>
void insertion_and_bubble_sort(T *p, int to);


template<typename T>
void bubble_sort_asc(T *p) {
	for (int i = 1; i < N; ++i) {
		for (int j = 0; j < N - i; ++j) {
			if (*(p + j) > *(p + j + 1)) swap(p, j, j + 1);
		}
	}
}

template<typename T>
void bubble_sort_desc(T *p) {
	for (int i = 1; i < N; ++i) {
		for (int j = 0; j < N - i; ++j) {
			if (*(p + j) < *(p + j + 1)) swap(p, j, j + 1);
		}
	}
}

template<typename T>
void shaker_sort_asc(T *p) {
	int t;
	bool exchange;
	do {
		exchange = false;
		for (int i = N - 1; i > 0; --i)
			if (*(p + i - 1) < *(p + i)) { 
				swap(p, i, i - 1);
				exchange = true;
			}
		for (int i = 0; i < N; ++i)
			if (*(p + i) > *(p + i + 1)) {
				swap(p, i, i + 1);
				exchange = true;
			}
	} while(exchange);
}

template<typename T>
void shaker_sort_desc(T *p) {
	int t;
	bool exchange;
	do {
		exchange = false;
		for (int i = N - 1; i > 0; --i)
			if (*(p + i - 1) > *(p + i)) { 
				swap(p, i, i - 1);
				exchange = true;
			}
		for (int i = 0; i < N; ++i)
			if (*(p + i) < *(p + i + 1)) {
				swap(p, i, i + 1);
				exchange = true;
			}
	} while(exchange);
}

template<typename T>
void simple_selection_sort_asc(T *p) {
	for (int i = 0; i < N; ++i) {
		int k = i;
		for (int j = i + 1; j < N; ++j) {
			if (*(p + k) > *(p + j)) {
				k = j;
			}
		}
		swap(p, k, i);
	}
}
template<typename T>
void insertion_sort(T *p, int to) {
	for (int i = 1; i < to; ++i) {
		int y = *(p + i);
		int j = i - 1;
		while (y < *(p + j) && j >= 0) {
			*(p + j + 1) = *(p + j);
			--j;
		}
		*(p + j + 1) = y;
		printf("\n");
		print_array(p, 10, " %d ");
		printf("\n");
	}
}

template<typename T>
void shell_sort_with_sedgewick_series(T *p) {
	int k, k1, i, j, m;
	for (i = 3; i >= 0; --i) {
		if (i % 2 == 0) k = (int) (9 * pow(2.0, i) - 9 * pow(2, i/2.0) + 1);
		if (i % 2 != 0) k = (int) (8 * pow(2.0, i) - 6 * pow(2, (i + 1)/2.0) + 1);
		if (k > N) continue;
		do {
			k1 = 0;
			for (m = 0, j = k; j < N; ++m, ++j) {
				if (*(p + m) > *(p + j)) {
					swap(p, m, j);
					++k1;
				}
			}
		} while (k1);
	}
}

template<typename T>
//Complexity is n^2
void shell_sort_with_shell_series(T *p, int to) {
	int k1;
	for (int k = to/2; k > 0; k /=2) {
		do {
			k1 = 0;
			for (i = 0, j = k; j < n; ++i, ++j) {
				if (*(p + i) > *(p + j)) {
					swap(p, i, j);
					++k1;
				}
			}
		}while(k1);
	}
}

template<typename T>
void insertion_and_bubble_sort(T *p, int to) {
	for (int i = 1; i < to; ++i) {
		if (i < to/2) {
			int y = *(p + i);
			int j = i - 1;
			while (y < *(p + j) && j >= 0) {
				*(p + j + 1) = *(p + j);
				--j;
			}
			*(p + j + 1) = y;
		} else {
			for (int k = to/2; k < to; ++k) {
				if (*(p + k) < *(p + k + 1)) {
					swap(p, k, k + 1);
				}
			}
		}
	}
}