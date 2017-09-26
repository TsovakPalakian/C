template<typename T>
int array_init(T *p, char data_type[]);
template<typename T>
int array_init(T *p, char data_type[], int size);
template<typename T>
int array_init(T *p, char data_type[], int from, int to);
template<typename T>
void array_random_init(T *p);
template<typename T>
void array_random_init(T *p, int to, int num_from, int num_to);
template<typename T>
void init_bidimansional_array(T *p, char data_type[], int column_count, int line_count);


template<typename T>
int array_init(T *p, char data_type[]) {
	for (int i = 0; i < N; ++i) {
		printf("n[%d] = ", i);
		scanf(data_type, p++);
	}
	return N;
}

template<typename T>
int array_init(T *p, char data_type[], int size) {
	if(size >= N) {
		printf("Size out of range[%d]", N);
	} else {
		for (int i = 0; i < size; ++i) {
			printf("n[%d] = ", i);
			scanf(data_type, p++);
		}
		for (int i = size; i < N; ++i) {
			if (*p++ != -858993460) ++size;
		}
	}
	return size;
}

template<typename T>
int array_init(T *p, char data_type[], int from, int to) {
	if(from <= to && to > N) {
		printf("Size out of range[%d]", N);
	} else {
		for (int i = from; i < to; ++i) {
			printf("n[%d] = ", i);
			scanf(data_type, p++);
		}
		for (i = 0; i < N; ++i) {
			if (*p++ != -858993460) size++;
		}
	}
	return ;
}

template<typename T>
void array_random_init(T *p) {
	srand(time(NULL));
	int n = *p;
	for (int i = 0; i < N; ++i) {
		*p++ = 0 + rand() % 300;
	}
}

template<typename T>
void array_random_init(T *p, int from, int to) {
	srand(time(NULL));
	for (int i = from; i < to; ++i) {
		*(p + from) = 0 + rand() % 300;
	}
}

template<typename T>
void array_random_init(T *p, int to, int num_from, int num_to) {
	srand(time(NULL));
	for (int i = 0; i < to; ++i) {
		*p++ = num_from + rand() % (num_to - num_from + 1);
	}
}

template<typename T>
void init_bidimansional_array(T *p, char data_type[], int column_count, int line_count) {
	for (int i = 0; i < column_count; ++i) {
		for (int j = 0; j < line_count; ++j) {
			printf(" a[%d][%d] = ", i, j);
			scanf(data_type, &p[i][j]);
		}
	}
	//printf("\n%d\n", *(*(p + 1) + 2));
}

template<typename T>
void init_bidimansional_array_random(T *p, char data_type[], 
											int column_count, int line_count, 
											int num_from, int num_to) {
	srand(time(NULL));
	for (int i = 0; i < column_count; ++i) {
		for (int j = 0; j < line_count; ++j) {
			*(*(p + i) + j) = num_from + rand() % (num_to - num_from + 1);
			printf(data_type, i, j, *(*(p + i) + j));
		}
		printf("\n");
	}
}