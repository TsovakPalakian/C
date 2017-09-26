#include<stdio.h>
#include<conio.h>

void main() {
	short x, *p;
	p = &x;
	printf("%p : %d", p, *p);
	getch();
}