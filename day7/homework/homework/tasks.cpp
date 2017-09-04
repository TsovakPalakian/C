#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include "prototype.h"

const int N = 100;

template<typename T>
int array_init(T *p, char data_type[]) {
	for (int i = 0; i < N; ++i) {
		printf("n[%d] = ", i);
		scanf(data_type, p++);
	}
	return N;
}

template<typename T>
int array_init(T *p, char data_type[], int size) {
	if(size >= N) {
		printf("Size out of range[%d]", N);
	} else {
		for (int i = 0; i < size; ++i) {
			printf("n[%d] = ", i);
			scanf(data_type, p++);
		}
		for (int i = size; i < N; ++i) {
			if (*p++ != -858993460) ++size;
		}
	}
	return size;
}

template<typename T>
int array_init(T *p, char data_type[], int from, int to) {
	if(from <= to && to > N) {
		printf("Size out of range[%d]", N);
	} else {
		for (int i = from; i < to; ++i) {
			printf("n[%d] = ", i);
			scanf(data_type, p++);
		}
		for (i = 0; i < N; ++i) {
			if (*p++ != -858993460) size++;
		}
	}
	return ;
}

template<typename T>
T array_sum(T *p) {
	int sum = 0;

	for (int i = 0; i < N; ++i) {
		T prt = *(p++);		
		if (prt != -858993460) {//спросить
			sum += prt;
		}
	}
	return sum;
}
template<typename T>
T array_sum(T *p, int to) {
	int sum = 0;

	for (int i = 0; i < to; ++i) {
		T prt = *(p++);		
		if (prt != -858993460) {//спросить
			sum += prt;
		}
	}
	return sum;
}
template<typename T>
T array_sum(T *p, int from, int to) {
	int sum = 0;

	for (from; from < to; ++from) {
		T prt = *(p + from);		
		if (prt != -858993460) {//спросить
			sum += prt;
		}
	}
	return sum;
}
template<typename T>
void array_revert(T *p, char data_type[]) {
	for (int i = N - 1; i >= 0; --i) {
		T prt = *(p + i);
		if (prt > -92559) {//спросить
			printf(data_type, i, prt);
		}
	}
}

template<typename T>
T array_sum_even(T *p) {
	int sum = 0;

	for (int i = 2; i < N - 1; i++, i++) {
		T prt = *(p + i);		
		if (prt > -858993460) {//спросить
			sum += prt;
		}
	}
	return sum;
}

template<typename T>
void array_task_4(T *p, T &sum_positive, T &sum_negative, 
					   int &count_positive, int &count_negative, 
					   T &mult_positive_odd, T &mult_negative_odd) {
	
	for (int i = 0; i < N - 1; i++) {
		T prt = *(p++);		
		if (prt > -858993460) {//спросить
			if (prt > 0) {
				sum_positive += prt; 
				count_positive++; 
				(i % 2 != 0) ? mult_positive_odd *= prt : 0;
			} else {
				sum_negative += prt; 
				count_negative++; 
				(i % 2 != 0) ? mult_negative_odd *= prt : 0;
			}
		}
	}
}

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
template<typename T>
void swap(T *p, int a, int b) {
	T tmp = *(p + a);
	*(p + a) = *(p + b);
	*(p + b) = tmp;
}
template<typename T>
void array_swap(T *p, int array_size) {
	int i_max, i_min;
	T max = *(p + 0);
	T min = *(p + array_size/2);
	for (int i = 1; i < array_size; ++i) {
		if (i < array_size/2) {			
			if (max < *(p + i)) {
				max = *(p + i);
				i_max = i;
			}
		} else {		
			if (min > *(p + i)) {
				min = *(p + i);
				i_min = i;
			}
		}
	}
	swap(p, i_max, i_min);
	for (int i = 0; i < 10; i++) {
		printf(" %d ", *p++);
	}
}

//template<typename T>
//void swap(T *p, int a, int b) {
//	T tmp = *(p + a);
//	*(p + a) = *(p + b);
//	*(p + b) = tmp;
//}
template<typename T>
void bubble_sort_asc(T *p) {
	for (int i = 1; i < N; ++i) {
		for (int j = 0; j < N - i; ++j) {
			if (*(p + j) > *(p + j + 1)) swap(p, j, j + 1);
		}
	}
}
template<typename T>
void bubble_sort_desc(T *p) {
	for (int i = 1; i < N; ++i) {
		for (int j = 0; j < N - i; ++j) {
			if (*(p + j) < *(p + j + 1)) swap(p, j, j + 1);
		}
	}
}
template<typename T>
void shaker_sort_asc(T *p) {
	int t;
	bool exchange;
	do {
		exchange = false;
		for (int i = N - 1; i > 0; --i)
			if (*(p + i - 1) < *(p + i)) { 
				swap(p, i, i - 1);
				exchange = true;
			}
		for (int i = 0; i < N; ++i)
			if (*(p + i) > *(p + i + 1)) {
				swap(p, i, i + 1);
				exchange = true;
			}
	} while(exchange);
}

template<typename T>
void shaker_sort_desc(T *p) {
	int t;
	bool exchange;
	do {
		exchange = false;
		for (int i = N - 1; i > 0; --i)
			if (*(p + i - 1) > *(p + i)) { 
				swap(p, i, i - 1);
				exchange = true;
			}
		for (int i = 0; i < N; ++i)
			if (*(p + i) < *(p + i + 1)) {
				swap(p, i, i + 1);
				exchange = true;
			}
	} while(exchange);
}

template<typename T>
void array_random_init(T *p) {
	srand(time(NULL));
	int n = *p;
	for (int i = 0; i < N; ++i) {
		*p++ = 0 + rand() % 300;
	}
}

template<typename T>
void array_random_init(T *p, int to, int num_from, int num_to) {
	srand(time(NULL));
	int n = *p;
	for (int i = 0; i < to; ++i) {
		*p++ = num_from + rand() % (num_to - num_from + 1);
	}
}

template<typename T>
void array_random_init(T *p, int from, int to) {
	srand(time(NULL));
	int n = *p;
	for (int i = from; i < to; ++i) {
		*(p + from) = 0 + rand() % 300;
	}
}

template<typename T>
void print_array(T *p, char data_type[]) {
	for (int i = 0; i < N; ++i) {
		printf(data_type, *p++);
	}
}
template<typename T>
void print_array(T *p, int to, char data_type[]) {
	for (int i = 0; i < to; ++i) {
		printf(data_type, *p++);
	}
}

template<typename T>
void print_array(T *p, int from, int to, char data_type[]) {
	for (int i = from; i < to; ++i) {
		printf(data_type, *(p + from));
	}
}
template<typename T>
void simple_selection_sort_asc(T *p) {
	for (int i = 0; i < N; ++i) {
		int k = i;
		for (int j = i + 1; j < N; ++j) {
			if (*(p + k) > *(p + j)) {
				k = j;
			}
		}
		swap(p, k, i);
	}
}
template<typename T>
void insertion_sort(T *p, int to) {
	for (int i = 1; i < to; ++i) {
		int y = *(p + i);
		int j = i - 1;
		while (y < *(p + j) && j >= 0) {
			*(p + j + 1) = *(p + j);
			--j;
		}
		*(p + j + 1) = y;
		printf("\n");
		print_array(p, 10, " %d ");
		printf("\n");
	}
}
template<typename T>
//Complexity is n^2
void shell_sort_with_shell_series(T *p, int to) {
	for (int k = to/2; k > 0; k /=2) {
		do {
			k1 = 0;
			for (i = 0, j = k; j < n; ++i, ++j) {
				if (*(p + i) > *(p + j)) {
					swap(p, i, j);
					++k1;
				}
			}
		}while(k1);
	}
}
template<typename T>
void shell_sort_with_sedgewick_series(T *p) {
	int k, k1, i, j, m;
	//for (k = N/2; k > 0; k /= 2) {
	for (i = 3; i >= 0; --i) {
		if (i % 2 == 0) k = (int) (9 * pow(2.0, i) - 9 * pow(2, i/2.0) + 1);
		if (i % 2 != 0) k = (int) (8 * pow(2.0, i) - 6 * pow(2, (i + 1)/2.0) + 1);
		if (k > N) continue;
		do {
			k1 = 0;
			for (m = 0, j = k; j < N; ++m, ++j) {
				if (*(p + m) > *(p + j)) {
					swap(p, m, j);
					++k1;
				}
			}
		} while (k1);
	}
}
template<typename T>
void insertion_and_bubble_sort(T *p, int to) {
	for (int i = 1; i < to; ++i) {
		if (i < to/2) {
			int y = *(p + i);
			int j = i - 1;
			while (y < *(p + j) && j >= 0) {
				*(p + j + 1) = *(p + j);
				--j;
			}
			*(p + j + 1) = y;
		} else {
			for (int k = to/2; k < to; ++k) {
				if (*(p + k) < *(p + k + 1)) {
					swap(p, k, k + 1);
				}
			}
		}
	}
}

template<typename T>
void distance(T *x, T *y) {
	double z[50];
	double dis = 0;
	int n, m;
	for (int i = 0; i < 10; ++i) {
		for (int j = i + 1; j < 10; ++j) {
			*(z + i + j) = sqrt(pow((*(x + i) - *(x + j)),2.0) + pow((*(y + i) - *(y + j)),2.0));
			if (dis < *(z + i + j)) {
				dis = *(z + i + j);
				n = i; m = j;
			}
			//printf("i = %d, j = %d, z = %lf \n", i, j, *(z + i + j));
		}
	}
	//printf("(xi, yi) = (%d, %d);\n(xj, yj) = (%d, %d)\n dis = %lf \n",*(x + n) ,*(y + n) ,*(x + m) ,*(y + m) ,dis);
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

	int x[N];
	int y[N];
	array_random_init(x, N, -200, 200);
	print_array(x, "%d\n");
	printf("*******************************************\n");
	srand(time());
	array_random_init(y, N, -200, 200);
	print_array(y, "%d\n");
	
	distance(x,y);

	system("pause");
}