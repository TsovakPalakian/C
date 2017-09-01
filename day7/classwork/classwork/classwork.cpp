#include<stdio.h>
#include<conio.h>

const int N = 5;
void main() {
	int r = 1;
	int g = 0;

	for (int i = 1; i <= 10; ++i) {
		g = r;
		r = r + g;
		
		printf(" r = %d", r);
		printf(" g = %d", g);
	}
	getch();
}