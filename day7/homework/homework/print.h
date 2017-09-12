template<typename T>
void print_array(T *p, char data_type[]);
template<typename T>
void print_array(T *p, int to, char data_type[]);
template<typename T>
void print_array(T *p, int from, int to, char data_type[]);
template<typename T>
void print_bidimansional_array(T *p, char data_type[], int column_count, int line_count);


template<typename T>
void print_array(T *p, char data_type[]) {
	for (int i = 0; i < N; ++i) {
		printf(data_type, *p++);
	}
}
template<typename T>
void print_array(T *p, int to, char data_type[]) {
	for (int i = 0; i < to; ++i) {
		printf(data_type, i, *p++);
	}
}

template<typename T>
void print_array(T *p, int from, int to, char data_type[]) {
	for (int i = from; i < to; ++i) {
		printf(data_type, *(p + from));
	}
}

template<typename T>
void print_bidimansional_array(T *p, char data_type[], int column_count, int line_count) {
	for (int i = 0; i < column_count; ++i) {
		for (int j = 0; j < line_count; ++j) {
			printf(data_type, i, j, *(*(p + i) + j));
		}
		printf("\n");
	}
}