template<typename T>
void swap(T *p, int a, int b);

template<typename T>
void swap(T *p, int a, int b) {
	T tmp = *(p + a);
	*(p + a) = *(p + b);
	*(p + b) = tmp;
}