#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

int integer(){
	double n;
	scanf("%lf", &n);
	int i = (int)n;
	return i;
}

void task1(){
	printf("\n\tTask_1\n"); 
	printf(" Enter any integer: ");

	int n = integer();
	
	if (n > 0) {
		n ++;
	}
		printf(" new number: %d", n);
	
	printf("\n\n--------------------------\n\n");
}

void task2() {
	printf("\tTask_2\n");
	printf(" Enter any integer: ");

	int n = integer();

	if (n % 2 != 0 && n > 0) {
		printf(" new number: %d", n + 1);
	} else if (n < 0) {
		printf(" new number: %d", n - 2);
	} else if (n == 0) {
		printf(" new number: %d", n = 10);
	} else {
		printf("\n The number is out of range.");
	}
	printf("\n\n--------------------------\n\n");
}

void task3() {
	printf("\tTask_3\n");
	int n, m;
	printf(" Enter any integer n: ");
	n = integer();
	printf("\n Enter any integer m: ");
	m = integer();
	if (n == m) {
		printf(" %d = %d", n, m);
	} else if (n > m) {
		printf(" %d > %d", n, m);
	} else if (n < m) {
		printf(" %d < %d", n, m);
	}
	printf("\n\n--------------------------\n\n");
}

void task4() {
	printf("\tTask_4\n");
	int n, m, p, max, min;
	printf(" Enter any integer n: ");
	n = integer();
	printf("\n Enter any integer m: ");
	m = integer();
	printf("\n Enter any integer p: ");
	p = integer();
	if (n > m) {
		max = n;
		min = m;
	} else {
		max = m;
		min = n;
	}

	if (max > p) {
		printf(" max: %d \n", max);
	} else {
		printf(" max: %d \n", p);
	}
	if (min > p) {
		printf(" min: %d \n", p);
	} else {
		printf(" min: %d \n", min);
	}
	printf("\n--------------------------\n\n");
}

void task5() {
	printf("\tTask_5\n");
	int n, m, p, tmp;
	printf(" Enter any integer n: ");
	n = integer();
	printf("\n Enter any integer m: ");
	m = integer();
	printf("\n Enter any integer p: ");
	p = integer();
	
	if (n > m) {
		tmp = n;
		n = m;
		m = tmp;
	}
	
	if (m > p) {
		tmp = m;
		m = p;
		p = tmp;
	}

	if (n > m) {
		tmp = n;
		n = m;
		m = tmp;
	}

	printf("\n %d : %d : %d \n\n", n, m, p);
	printf("\n--------------------------\n\n");
}

void task6(){//hgghghgh
	printf("\tTask_6\n");
	printf(" Enter any integer (0, 100): ");
	int n;
	n = integer();
	if (n >= 60) {
		printf(" Perfectly");
	} else if (n >= 30 && n < 60){
		printf(" Good");
	} else if (n > 17 && n < 30) {
		printf(" Satisfactorily");
	} else if (n < 17) {
		printf(" Poorly");
	}
	printf("\n\n--------------------------\n\n");
}

int k = 0;

void task7() {	
	if (k == 0) {
		printf("\tTask_7\n");
		k = -1;
	}
	printf(" Enter the number [1,12]: ");

	switch (m) {
		case 3: 
		case 4:
		case 5:
			{ printf("  Spring\n"); k = 0; }
			break;
		case 6:
		case 7:
		case 8:
			{ printf("  Summer\n"); k = 0; }
			break;
		case 9:
		case 10:
		case 11:
			{ printf("  Autumn\n"); k = 0; }
			break;
		case 12:
		case 1:
		case 2:
			{ printf("  Winter\n"); k = 0; }
			break;
		default : { 
			printf("  Try agane...\n");
			task7();
		}
	}
	if (k == 0) {
		printf("\n--------------------------\n\n");
	}
}
void task8() {
	printf("\tTask_8\n");
	double A, B, C;
	printf(" Enter any number A: ");
	scanf("%lf", &A);
	printf("\n Enter any numb  er B: ");
	scanf("%lf", &B);
	printf("\n Enter any number C: ");
	scanf("%lf", &C);

	if ((A < B && B < C) || (A > B && B > C)) {
		printf(" %.3lf : %.3lf : %.3lf \n", A * 2, B * 2, C * 2);
	} else {
		printf(" %.3lf : %.3lf : %.3lf \n", -A, -B, -C);
	}
	printf("\n--------------------------\n\n");
}

void task9() {
	printf("\tTask_9\n");
	int x0, y0, R, xa, ya;
	printf(" Enter the coordinates of the center of the ciricle: \n");
	printf(" x0 = ");
	x0 = integer();
	printf(" y0 = ");
	y0 = integer();
	printf(" Coordinates of the center: O(%d,%d)\n", x0, y0);
	printf("\n R = ");
	R = integer();
	printf("\n xa = ");
	xa = integer();
	printf(" ya = ");
	ya = integer();
	printf(" Coordinates of the point: A(%d,%d)\n\n", xa, ya);

	double c = pow((xa - x0),2.0) + pow((ya - y0),2.0);
	double r = pow(R,2.0);

	printf(" Is this the point in the circle?\n");
	if (c - r <= 0) {
		printf("  Yes\n");
	} else {
		printf("  No\n");
	}
	printf("\n--------------------------\n\n");
}

void progExit(char ch[100]){
	if (k == 0) {
		printf("\t%s\n", ch);
		printf("   For exit the program, type : 0");
	}
}

void task10_1(int c1, int c2, int sum) {
	printf("\n Is it possible to collect %d rubles from coins whith a face value of %d and %d rubles? ", sum, c1, c2);
	int rem1 = sum % c1;
	int rem2 = sum % c2;
	if (rem1 != 0 && rem1 % c2 == 0) {
		printf(" -Yes\n\n");
	} else if (rem2 != 0 && rem2 % c1 == 0) {
		printf(" -Yes\n\n");
	} else {
		printf(" -No\n\n");
	}
}

void task10() {
	progExit("Task_10");
	k = 1;
	int x = 5, y = 10, z = 20;
	int sum = x + y + z;

	int c1, c2;
	printf("\n Enter the ordinal number of the first coin : ");
	scanf("%d", &c1);

	if (c1 == 0) {
		exit(0);
	}

	printf("\n Enter the ordinal number of the second coin : ");
	scanf("%d", &c2);

	if (c1 > 0 && c1 < 4 && c2 > 0 && c2 < 4) {
		switch(c1 * c2) {
			case 2 : task10_1(x, y, sum);
				break;
			case 3 : task10_1(x, z, sum);
				break;
			case 6 : task10_1(y, z, sum);
				break;
		}

		task10();
	} else {
		printf("\n The number is out of range. Please repeat the input...\n");
		task10();
	}
}

int task11_1() {
	printf("\n Enter the new integer [1,7]: ");
	int n;
	scanf("%d", &n);
	return n;
}
void task11() {

	progExit("Task_11");

	int n;
	
	if (k == 0) {
		printf("\n Enter the integer [1,7]: ");
		scanf("%d", &n);
	} else {
		n = task11_1();
		if (n == 0) {
			exit(0);
		}
	}

	k = 1;
	printf("   ");
	switch(n){
		case 1 : printf("Sunday");
			break;
		case 2 : printf("Tuesday");
			break;
		case 3 : printf("Wednesday");
			break;
		case 4 : printf("Thursday");
			break;
		case 5 : printf("Friday");
			break;
		case 6 : printf("Saturday");
			break;
		case 7 : printf("Monday");
			break;
		default : printf("\n The number is out of range. Please repeat the input...\n");
	}
	task11();
}

void task12() {
	
	progExit("Task_12");

	printf("\n Enter the integer [100,999]: ");
	int n;
	scanf("%d", &n);

	if (n == 0) {
		exit(0);
	}

	k = 1;

	int rem1 = n % 100;
	int rem2 = rem1 % 10;
	
	if (n >= 100 && n <= 999) {
		int sw1 = (n - rem1);
		printf(" -->  ");
		switch(sw1) {
			case 100 : printf("one");
				break;
			case 200 : printf("two");
				break;
			case 300 : printf("three");
				break;
			case 400 : printf("four");
				break;
			case 500 : printf("five");
				break;
			case 600 : printf("six");
				break;
			case 700 : printf("seven");
				break;
			case 800 : printf("eight");
				break;
			case 900 : printf("nine");
				break;
		}
		printf(" hundred ");

		int sw2 = (rem1 - rem2);
		if (rem1 >= 20) {
			    printf("and ");
		    }
		switch(sw2) {
			case 20 : printf("twenty");
				break;
			case 30 : printf("thirty");
				break;
			case 40 : printf("forty");
				break;
			case 50 : printf("fifty");
				break;
			case 60 : printf("sixty");
				break;
			case 70 : printf("seventy");
				break;
			case 80 : printf("eighty");
				break;
			case 90 : printf("ninty");
				break;
			default : if (rem1 > 0) {
						  printf("and ");
					  }
		}
		printf(" ");
		if (rem1 >= 10 && rem1 <= 19){
			rem2 = 0;
		}
		switch(rem2) {
			case 1 : printf("one");
				break;
			case 2 : printf("two");
				break;
			case 3 : printf("three");
				break;
			case 4 : printf("four");
				break;
			case 5 : printf("five");
				break;
			case 6 : printf("six");
				break;
			case 7 : printf("seven");
				break;
			case 8 : printf("eight");
				break;
			case 9 : printf("nine");
				break;
		}
		switch(rem1) {
			case 10 : printf("ten");
				break;
			case 11 : printf("eleven");
				break;
			case 12 : printf("twelve");
				break;
			case 13 : printf("thirteen");
				break;
			case 14 : printf("fourteen");
				break;
			case 15 : printf("fifteen");
				break;
			case 16 : printf("sixteen");
				break;
			case 17 : printf("seventeen");
				break;
			case 18 : printf("eighteen");
				break;
			case 19 : printf("nineteen");
				break;
		}
		printf("\n");
		task12();
	} else {
		printf("\nThe number is out of range. Please repeat the input...\n");
		task12();
	}
}

void task13() {

	progExit("Task_13");
	k = 1;

	int n, m;
	printf("\n Enter the number N [2, 14]: ");
	scanf("%d", &n);

	if (n == 0) {
		exit(0);
	}

	printf("\n Enter the number M [1, 4]: ");
	scanf("%d", &m);

	if (m == 0) {
		exit(0);
	}

	if ((n > 1 && n < 15) && (m > 0 && m < 5) ) {
		printf(" --> ");
		switch(n) {
			case 2 : printf("Two");
				break;
			case 3 : printf("Three");
				break;
			case 4 : printf("Four");
				break;
			case 5 : printf("Five");
				break;
			case 6 : printf("Six");
				break;
			case 7 : printf("Seven");
				break;
			case 8 : printf("Eight");
				break;
			case 9 : printf("Nine");
				break;
			case 10 : printf("Ten");
				break;
			case 11 : printf("Jack");
				break;
			case 12 : printf("Queen");
				break;
			case 13 : printf("King");
				break;
			case 14 : printf("Ace");
				break;
		}
		printf(" of ");
		switch(m) {
			case 1 : printf("hearts");
				break;
			case 2 : printf("diamonds");
				break;
			case 3 : printf("spades");
				break;
			case 4 : printf("clubs");
				break;
		}
		printf("\n");
		task13();
	} else {
		printf("\n The number is out of range. Please repeat the input...\n");
		task13();
	}
}
double valueY(double x){
	printf("\n Enter the value c, d, k : ");
	int c, d, k;
	scanf("%d%d%d", &c, &d, &k);
	double y = pow(sin(c * x + pow(d,2.0) + k * pow(x,2.0)), 3.0);
	return y;
}
void task_variant_7(){

	progExit("Task_variant_7");
	k = 1;

	int z;
	double y, x;
	printf("\n Enter the value z : ");
	scanf("%d", &z);

	if (z == 0) {
		exit(0);
	}
	if (z < 0) {
		x = pow(z, 2.0) - z;
		y = valueY(x);
		printf(" The function was solved by the first branch.");
	} else {
		x = pow(z, 3.0);
		y = valueY(x);
		printf(" The function was solved by the second branch.");
	}
	printf("\n The value of the function is : y(%.0lf) = %lf\n\n", x, y);
	task_variant_7();
}

void main() {
	task1();
	task2();
	task3();
	task4();
	task5();
	task6();
	task7();
	task8();
	task9();
	//task10();//This function must be run separately from all.
	//task11();//This function must be run separately from all.
	//task12();//This function must be run separately from all.
	//task13();//This function must be run separately from all.
	//task_variant_7();//This function must be run separately from all.
	_getch();
}