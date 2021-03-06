#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include "prototype.h"
#include "addition.h"
#include "initialization.h"
#include "print.h"
#include "sorting.h"
#include "summation.h"
#include "swap.h"
#include "tasks.h"

const int N = 100;
const int M = 100;

void task_5(int number_of_students) {
	srand(time(NULL));
	int arr[N];
	int *p = arr;
	int n, count2 = 0, count3 = 0, count4 = 0, count5 = 0;
	for (int i = 0; i < number_of_students; ++i) {
		n = *p++;
		n = 2 + rand() % 4;
		(n == 2) ? count2++ : 0;
		(n == 3) ? count3++ : 0;
		(n == 4) ? count4++ : 0;
		(n == 5) ? count5++ : 0;
		printf(" %d \n", n);
	}
	printf(" two received %d people\n", count2);
	printf(" three received %d people\n", count3);
	printf(" four received %d people\n", count4);
	printf(" five received %d people\n", count5);
}

int main(void) {
//task_1
	//int arr[N];
	//array_init(arr, "%d", 10);
	//printf("sum = %d \n", array_sum(arr));
//task_2
	//double arr[N];
	//array_init(arr, "%lf", 10);
	//array_revert(arr, " [%d] = %.2lf\n");
//task_3
	//printf("sum = %d \n", array_sum_even(arr));
//task_4

	//double sum_positive = 0, sum_negative = 0, mult_positive_odd = 1, mult_negative_odd = 1;
	//int count_positive = 0, count_negative = 0;
	//array_task_4(arr, sum_positive, sum_negative, 
	//				  count_positive, count_negative, 
	//				  mult_positive_odd, mult_negative_odd);
	//printf(" %lf : %lf : %d : %d : %lf : %lf ", sum_positive, sum_negative, 
	//											count_positive, count_negative, 
	//											mult_positive_odd, mult_negative_odd);

//task_5
	//task_5(10);
//task_6
	//array_add(arr, 17, 3, 10);
//task_7
	//array_swap(arr, 10);
//task_8
	//swap(arr, 5, 7);

	//bubble_sorting(arr);

	//array_random_init(arr, 100, 0, 200);
	//int arra[] = {3, 7, 1, 5, 9, 0, 6, 2, 8, 4};
	//print_array(arra, 10, " %d ");
	//simple_selection_sort(arr);
	//printf("\n**********\n");
	//print_array(arr, 20, " %d ");

	//insertion_sort(arra);

	//double k;
	//for (int i = 3; i >= 0; --i) {
	//	if (i % 2 == 0) k = 9 * pow(2.0, i) - 9 * pow(2, i/2.0) + 1;
	//	if (i % 2 != 0) k = 8 * pow(2.0, i) - 6 * pow(2, (i + 1)/2.0) + 1;
	//	printf(" %lf \n", k);
	//}
	//double k = 0;
	//for (int i = 1; k <= 100/2; ++i) {
	//	for (int j = 1; j < i; ++j) {
	//		k = pow(2.0, i) * pow(3.0, j);
	//		printf(" %lf \n", k);
	//	}
	//}
	//print_array(arr, " %d ");
	//printf("\n");
	//shell_sort_with_sedgewick_series(arr);
	//print_array(arr, " %d ");


	//print_array(arr, " %d ");
	//printf("\n");
	//insertion_and_bubble_sort(arr, N);
	//print_array(arr, " %d ");

	//int x[N];
	//int y[N];
	//array_random_init(x, N, -200, 200);
	//print_array(x, "%d\n");
	//printf("*******************************************\n");
	//srand(time(0));
	//array_random_init(y, N, -200, 200);
	//print_array(y, "%d\n");
	//
	//distance(x,y);
//task_13
	//int xx[N][M];
	//init_bidimansional_array_random(xx, " a[%d][%d] = %d", 3, 3, 0, 100);
	//tasks_13(xx, 3, 3);
//task_14
	//int xx[N][M];
	//init_bidimansional_array_random(xx, " a[%d][%d] = %d ", 10, 3, 10, 99);
	//task_14(xx, 10, 3);
	//printf("\n");
	//print_bidimansional_array(xx, " a[%d][%d] = %d ", 10, 3);
//task_15
	/*int x[3][4];
	int y[4][7];
	int z[3][7];
	init_bidimansional_array_random(x, " x[%d][%d] = %d ", 3, 4, 10, 99);
	printf("\n");
	init_bidimansional_array_random(y, " y[%d][%d] = %d ", 4, 7, 10, 99);

	n_x_m(x, y, z);
	printf("\n");
	print_bidimansional_array(z, " z[%d][%d] = %d ", 3, 7);*/
//task_16
	/*int a[7][7];
	int b[7];
	init_bidimansional_array_random(a, " a[%d][%d] = %d ", 7, 7, 0, 10);
	for (int i = 0; i < 7; ++i) {
		b[i] = 0;
		for (int j = 0; j < 7; ++j) {
			if (a[i][j] == 0) {
				b[i] = 0;
				break;
			}
			b[i] += a[i][j];
		}
	}
	print_array(b, 7, " b[%d] = %d\n");*/
//task_17

	//int a[3][11];
	//int b[3];
	//init_bidimansional_array_random(a, " a[%d][%d] = %d ", 3, 7, -20, 50);
	//int n, m;
	//for (int i = 0; i < 3; ++i) {
	//	b[i] = 1;
	//	n = -1;
	//	m = -1;
	//	for (int j = 0; j < 7; ++j) {
	//		if(a[i][j] < 0 && n == -1) {
	//			n = j;
	//		}
	//		if(a[i][j] < 0) {
	//			m = j;
	//		}
	//	}
	//	printf("%d : %d\n", n, m);
	//	for (n; n < m - 1; ++n) {
	//		b[i] *= a[i][n + 1];
	//	}
	//}

	//print_array(b, 3, " b[%d] = %d\n");
//task_18
	//int a[3][4];
	//init_bidimansional_array_random(a, " a[%d][%d] = %d ", 3, 4, -20, 50);
	//for (int i = 0; i < 3; ++i) {
	//	for (int j = 0; j < 4; ++j) {
	//		int min = a[i][j];
	//		int max = a[i][j];
	//		for (int k = 0; k < 4; ++k) {
	//			if (min > a[i][k]) {
	//				min = a[i][k];
	//			}
	//		}
	//		for (int n = 0; n < 3; ++n) {
	//			if (max < a[n][j]) {
	//				max = a[n][j];
	//			}
	//		}
	//		if (a[i][j] == min && a[i][j] == max) {
	//			printf("\n a[%d][%d] = %d is saddle value \n", i, j, a[i][j]);
	//		}
	//	}
	//}

	int x1[5];
	double x2[5];

	char sD[4] = "%d";
	char sLF[5] = "%lf";

	array_init(x1, sD, 5);
	array_init(x2, sLF, 5);

	printf(sD, array_sum(x1, 5));
	puts("");
	printf(sLF, array_sum(x2, 5));
	
	system("pause");
}