template<typename T>
void array_add(T *p, T number, int place, int array_size);


template<typename T>
void array_add(T *p, T number, int place, int array_size) {
	if (!(place >= 0 && place < array_size)) return; 
	for (array_size - 2; place < array_size; --array_size) {
		*(p + array_size + 1) = *(p + array_size);
	}
	*(p + place) = number;
	//for (int i = 0; i < 10; i++) {
	//	printf(" %d ", *p++);
	//} 
}