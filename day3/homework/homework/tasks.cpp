#include<stdio.h>
#include<conio.h>
#include<math.h>

void task_1() {
	printf("\n-----------------------------------------\n");
	printf("\tTask_1\n");
	fflush(stdout);

	printf(" Enter a positive integer [1,16]: ");
	int n, fac = 1;
	scanf("%d", &n);
	if (n < 0) { 
		printf(" The wrong number is entered!"); 
		return;
	}
	for(int i = 1; i <= n; ++i) {
		fac *= i;
	}
	printf(" Factorial of the number %d is: %d", n, fac);

	printf("\n-----------------------------------------\n");
}
void task_2() {
	printf("\n-----------------------------------------\n");
	printf("\tTask_2\n");
	fflush(stdout);
	
	int x, n, deg = 1;
	printf(" Enter a positive integer: ");
	scanf("%d", &x);
	printf(" Enter a positive integer: ");
	scanf("%d", &n);
	
	for (int i = 1; i <= n; ++i) {
		deg *= x;
	}
	printf(" The number %d in the power of %d is %d", x, n, deg);

	printf("\n-----------------------------------------\n");
}
void task_3() {
	printf("\n-----------------------------------------\n");
	printf("\tTask_3\n");
	fflush(stdout);
	
	int x;
	double sum = 0, fac = 1;
	printf(" Enter a positive integer: ");
	scanf("%d", &x);
	
	for (int i = 1; i <= x; ++i) {
		fac *= i;
		sum += fac;
	}
	printf(" The sum of the factorials is: %.0lf\n", sum);

	printf("\n-----------------------------------------\n");
}
void task_4() {
	printf("\n-----------------------------------------\n");
	printf("\tTask_4\n");
	fflush(stdout);
	
	int a, b, n, m;
	printf(" Enter a positive integer a (a < b): ");
	scanf("%d", &a);
	printf(" Enter a positive integer b: ");
	scanf("%d", &b);
	
	for (a; b >= a; ++a) {
		for (int i = 0; i < a; ++i) {
			printf(" %d ", a);
		}
		printf("\n");
	}

	printf("\n-----------------------------------------\n");
}
void task_5() {
	printf("\n-----------------------------------------\n");
	printf("\tTask_5\n");
	fflush(stdout);
	
	int a, i, sum = 0;
	printf(" Enter a positive integer [6, 10000]: ");
	scanf("%d", &a);
	for (int k = 1; k < a; ++k) {
		sum = 0;
		for (i = 1; i < k ; ++i) {
			sum += (k % i == 0) ? i : 0;
		}
		(k == sum) ? printf(" Is this the integer perfect? Yes: %d\n", k) : 0;
	}
	printf("\n-----------------------------------------\n");
}
void task_6() {
	printf("\n-----------------------------------------\n");
	printf("\tTask_6\n");
	fflush(stdout);
	
	int a, i, j;
	printf(" Enter a positive integer: ");
	scanf("%d", &a);
	int k;
	for (i = 2; i <= a; ++i) {
		k = 0;
		for (j = 2; j <= i; ++j) {
			(i % j == 0) ? ++k : 0;
		}
		(k == 1) ? printf(" %d\n", i) : 0;
	}

	/*for (i = 2; i <= sqrt(n); ++i) {
		if (!(n % i)) {
			f = 0;
			break;
		}
		if (f == 1) {
			printf(" Yes");
		} else {
			printf(" No");
		}
	}*/

	printf("\n-----------------------------------------\n");
}
void task_7() {
	printf("\n-----------------------------------------\n");
	printf("\tTask_7\n");
	printf(" At the end of the input, press \"0\"\n");
	fflush(stdout);
	
	int n = 0, i = 0, k = 0, mult = 1;
	printf(" Enter a positive integer: \n");

	do {
		scanf("%d", &n);
		(n > 0) ? mult *= n : 0;
		(n < 0) ? ++i : 0;
		(n % 2 != 0) ? ++k : 0;
	} while (n != 0);

	printf(" The count of odd numbered : %d\n", k);
	printf(" The count of negative numbers : %d\n", i);
	printf(" Multiplication: %d", mult);

	printf("\n\n-----------------------------------------\n");
}
void task_8() {
	printf("\n-----------------------------------------\n");
	printf("\tTask_8\n");
	printf(" At the end of the input, press \"0\"\n");
	fflush(stdout);
	
	int n, i = 0, j = 0, k = 0, m = 0;
	do {
		scanf("%d", &n);
		(n == -10) ? ++i : (n == 5) ? ++j : (n == 25) ? ++k : (n == 100) ? ++m : 0;
	} while (n != 0);

	printf(" The count of -10 is : %d\n", i);
	printf(" The count of 5 is : %d\n", j);
	printf(" The count of 25 is : %d\n", k);
	printf(" The count of 100 is : %d\n", m);

	printf("\n\n-----------------------------------------\n");
}
void task_9() {
	printf("\n-----------------------------------------\n");
	printf("\tTask_9\n");
	fflush(stdout);
	
	int count;
	double n, k;
	printf(" Enter a positive integer - count: \n");
	scanf("%d", &count);
	printf(" Enter the numbers: \n");

	scanf(" %lf", &k);
	do {
		scanf(" %lf", &n);
		(k > n) ? k = n : 0;
		--count;
	} while (count > 1);

	printf("\n The minimum number is : %lf", k);

	printf("\n\n-----------------------------------------\n");
}
void task_10() {
	printf("\n-----------------------------------------\n");
	printf("\tTask_10\n");
	fflush(stdout);
	
	int n, k, sum = 0, mult = 1;
	printf(" Enter a integer: \n");
	scanf("%d", &n);

	do {
		k = n % 10;
		n /= 10;
		sum += k;
		mult *= k;
	} while (n > 0);

	printf("\n The sum is : %d", sum);
	printf("\n The mult is : %d", mult);

	printf("\n\n-----------------------------------------\n");
}
void task_11() {
	fflush(stdin);
	printf("\n-----------------------------------------\n");
	printf("\tTask_11\n");
	
	double n, res;
	char ch, enter;
	printf(" Enter an expression: \n");

	scanf("%lf", &res);
	do {
		scanf("%c", &enter);
		scanf("%c", &ch);
		scanf("%c", &enter);
		(ch != '=') ? scanf("%lf", &n) : 0;
		switch (ch) {
			case 43 : res += n;
				break;
			case 45 : res -= n;
				break;
			case 42 : res *= n;
				break;
			case 47 : res /= n;
				break;
		} 
	} while (ch != '=');

	printf("\n The value of the expression is : %lf", res);

	printf("\n\n-----------------------------------------\n");
}
void task_12() {
	printf("\n-----------------------------------------\n");
	printf("\tTask_12\n");
	fflush(stdout);
	
	int n, sum = 0;
	printf(" Enter a positive integer: ");
	scanf("%d", &n);

	int i = 0;
	while (sum < n) {
		sum += i;
		++i;
	}
	printf(" The smallest number is: %d\n", 1);
	printf(" The greatest number is: %d\n", i - 1);

	printf(" The value of the expression is : %d", sum);

	printf("\n\n-----------------------------------------\n");
}
void task_13() {
	printf("\n-----------------------------------------\n");
	printf("\tTask_13\n");
	fflush(stdout);
	
	char name[100];
	int norm, hours_worked, num_of_empl;
	double hourly_rate, hourly_rate_super, salary;

	printf(" Number of employees : ");
	scanf("%d", &num_of_empl);

	while(num_of_empl > 0) {
		printf("\n Employee name : ");
		scanf("%s", &name);
		printf(" Hours worked : ");
		scanf("%d", &hours_worked);
		printf(" Hourly rate : ");
		scanf("%lf", &hourly_rate);

		if (hours_worked >= 40) {
			salary = 40 * hourly_rate + (hours_worked - 40) * hourly_rate * 1.5;
		} else {
			salary = hours_worked * hourly_rate;
		}	

		printf(" Salary : %.2lf rubles\n", salary);
		--num_of_empl;
		fflush(stdout);
	}

	printf("\n\n-----------------------------------------\n");
}
void main() {
	//task_1();
	//task_2();
	//task_3();
	//task_4();
	//task_5();
	//task_6();
	//task_7();
	//task_8();
	//task_9();
	//task_10();
	task_11();
	//task_12();
	//task_13();
	_getch();
}