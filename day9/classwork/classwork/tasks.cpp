#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

template<typename T>
void mass(T x[][15]) {
	int columns = sizeof(x)/sizeof(x[0]);
	int rows = sizeof(x[0])/sizeof(x[0][0]);
	int cells = sizeof(x)/sizeof(x[0][0]);
	printf("columns = %d, rows = %d, cells = %d", columns, rows, cells);
}

void main(void) {
	int x[10][15];
	mass(x);
	system("pause");
}