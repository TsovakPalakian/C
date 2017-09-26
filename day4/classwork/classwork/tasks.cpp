#include<stdio.h>
#include<conio.h>


void task_1() {
	printf("Enter the number \n");
	int a, b, c, d, i, max;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	scanf("%d", &i);

	max = a;
	(max < b) ? max = b : 0;
	(max < c) ? max = c : 0;
	printf("max = %d\n", max);
	max = b;
	(max < c) ? max = c : 0;
	(max < d) ? max = d : 0;
	printf("max = %d\n", max);
	max = c;
	(max < d) ? max = d : 0;
	(max < i) ? max = i : 0;
	printf("max = %d\n", max);
}
void main() {
	task_1();
	_getch();
}