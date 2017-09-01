#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include "prototype.h"

const int N = 100;

template<typename T>
int array_init(T &p, char data_type[]) {
	int real_size = sizeof(p)/sizeof(p[0]);
	for (int i = 0; i < real_size; ++i) {
		printf("n[%d] = ", i);
		scanf(data_type, p);
	}
	return real_size;
}
template<typename T>
int array_init(T &p, char data_type[], int size) {
	int real_size = sizeof(p)/sizeof(p[0]);
	if(size > real_size) {
		printf("Size out of range[%d]", real_size);
	} else {
		for (int i = 0; i < size; ++i) {
			printf("n[%d] = ", i);
			scanf(data_type, p);
		}
	}
	return real_size;
}
template<typename T>
int array_init(T &p, char data_type[], int from, int to) {
	int real_size = sizeof(p)/sizeof(p[0]);
	if(from <= to && to > real_size) {
		printf("Size out of range[%d]", real_size);
	} else {
		for (int i = from; i < to; ++i) {
			printf("n[%d] = ", i);
			scanf(data_type, p);
		}
	}
	return real_size;
}

//template<typename T>
int array_sum(int *p) {
	//int real_size = sizeof(p)/sizeof(p[0]);
	int sum = 0;

	for (int i = 0; i < N; ++i) {
		printf("n[%d] = ", *(p++));
	}
	return sum;
}

int main(void) {
	int arr[N];
	//int size = sizeof(arr);
	//printf("n[%d] = ", size);
	//array_init_all(arr, "%d");
	array_init(arr, "%d", 7);
	printf("n[%d] = ", array_sum(arr));
	//printf("n[%d] = ", array_init_all(arr, "%d"));
	system("pause");
}