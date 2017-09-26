#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

char mystery(int, int);
char mystery(int first, int second) {
	if (first >= second) return 'W';
	return 'H';
}
void F(int*, int, int*);
void F(int* x, int y, int* z) {
	*x = 1;
	y = 2;
	*z = 3;
}

void main(void) {
	//1
	//int z, a[] = { 2, 3 }, *p = a;
	//z = --*p++;
	//printf("%5d%5d\n", z, *p);

	//2
	//printf("%cow\n", mystery(1, 9));

	//3
	//int a = 10, b = 20, c = 30;
	//F(&a, c, &b);
	//printf("%d %d %d\n", a, b, c);

	//4
	//short int x = 3;
	//printf("%hd", x);
	//{
	//	printf("%hd", x);
	//	short int x = 2;
	//	printf("%hd", x);
	//	{
	//		printf("%hd", x);
	//		short int x = 1;
	//		printf("%hd", x);
	//	}
	//	printf("%hd", x);
	//}
	//printf("%hd", x);

	//5
	//int x = 5, y = 7, *p1 = &x, *p2 = &y;
	//*p1 = 10;
	//*p2 = 20;

	//printf("%d %d", x, y);
	//printf("%d %d", *p1, *p2);

	//p2 = p1;
	//*p1 = 30;

	//printf("%d %d", x, y);
	//printf("%d %d", *p1, *p2);


	//6
	//int arr[10] = {-10, 27, 46, -8, 4, -81, 17, 21, 10, 101};
	//for (int i = 0; i < 10; i++)
	//{
	//	if (i % 2) printf("%d ", arr[i]);
	//}
	system("pause");
}