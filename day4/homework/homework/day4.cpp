#include<stdio.h>
#include "day4.h"

int max(int a, int b, int c) {

	(a < b) ? a = b : 0;
	(a < c) ? a = c : 0;

	return a;
}
int min(int a, int b, int c) {

	(a > b) ? a = b : 0;
	(a > c) ? a = c : 0;

	return a;
}
double max(double a, double b, double c) {

	(a < b) ? a = b : 0;
	(a < c) ? a = c : 0;

	return a;
}
double min(double a, double b, double c) {

	(a > b) ? a = b : 0;
	(a > c) ? a = c : 0;

	return a;
}

int enter_an_integer(char name[]) {
	int integer;
	printf(" Enter an integer %s: ", name);
	scanf("%d", &integer);
	return integer;
}

int enter_a_positive_integer(char name[]) {
	int positive_integer;
	printf(" Enter a positive integer %s: ", name);
	scanf("%d", &positive_integer);
	if(positive_integer < 0) {
		printf("\n Entered not positive integer.");
		return 0;
	}
	return positive_integer;
}

int enter_a_negative_integer(char name[]) {
	int negative_integer;
	printf(" Enter a negative integer %s: ", name);
	scanf("%d", &negative_integer);
	if(negative_integer > 0) {
		printf("\n Entered not negative integer.");
		return 0;
	}
	return negative_integer;
}

double enter_any_number(char name[]) {
	double any_number;
	printf(" Enter any number %s: ", name);
	scanf("%lf", &any_number);
	return any_number;
}

int factorial(int positive_integer) {
	if (positive_integer < 0) {
		printf("\n Factorial of negative numbers does not exist.\n");
		return 0;
	}
	int factorial = 1;
	for (int i = 1; i <= positive_integer; i++) {
		factorial *= i;
	}
	return factorial;
}

int summation(int number_of_summable_parameters, ...) {
	int *p = &number_of_summable_parameters;
	int sum = 0;
	for (int i = 0; i < number_of_summable_parameters; ++i) {
		sum += *++p;
	}
	return sum;
}

double division(int num1, int num2) {
	return (double) num1/num2;
}

void prime_numbers(int unto_num) {
	int flag;
	for (int i = 1; i <= unto_num; ++i) {
		flag = 0;
		for (int j = 1; j <= i; ++j) {
			(!(i % j)) ? ++flag : 0;
		}
		(flag == 2) ? printf(" %d\n", i) : 0;
	}
}
void perfect_integer(int unto_num) {
	int i, sum = 0;
	for (int k = 1; k < unto_num; ++k) {
		sum = 0;
		for (i = 1; i < k ; ++i) {
			if ((k % i) == 0) {
				sum += i;
			}
		}
		(k == sum) ? printf("\n Is this the integer perfect? Yes: %d\n", k) : 0;
	}
}
void initialization_of_two_variables(int &n, int &m) {
	n = enter_any_number("n");
	m = enter_any_number("m");
}
void values_of_function(int &n, int &m, int &p) {
	int a = n, b = m, c = p;
	n = a + b + c - (int) power(a, 2);
	m = (int) (power(a, 2) + power(b, 2) - power(c, 2));
	p = a * b * c;
}
void swap(int &n, int &m) {
	n = n + m;
    m = n - m;
    n = n - m;
}
int fibonacci_numbers(int n) {
	if (n == 0 || n == 1) {
		return n;
	} else {
		return fibonacci_numbers(n - 1) + fibonacci_numbers(n - 2);
	}
}
int sum = 0;
int summation_number(int n){
	if (n) {
		sum += n % 10;
		n = n / 10;
		summation_number(n);
	}
	return sum;
}
int gcd = 0;
int GCD(int n, int m) {
	if (!m) {
		gcd = n;
	} else {
		gcd = GCD(m, n % m);
	}
	return gcd;
}
int k = 7;
int p = 57;
void guess_the_number(int n) {
	int m = enter_an_integer("m");
	if (m > k && m < p) {
		k = m;
	} 
	if (m < p) {
		p = m;
	}
	(m > n) ? printf(" enter the number from the interval [%d, %d]\n",k, m) : 0;
	(m < n) ? printf(" enter the number from the interval [%d, %d]\n", m, p) : 0;
	if(n != m) { 
		guess_the_number(n);
	} else {
		printf("\n Hooray! The number is %d!\n", m);
	}
}
long long int inverse(long long int number) {
	long long int k;
	long long int n = 0;

	do {
		k = number % 10;
		n = (n + k)* 10;
		number = number / 10;
	} while (number);
	return n / 10;
}

void form_of_equestion(double a, double b, double c) {
	printf("\n y(x) = ");
	switch ((int)a) {
		case -1 : printf("-x^2 ");
			break;
		case 1 : printf("x^2 ");
			break;
		default : printf("%.2lf * x^2 ", a);
	}
	if (b) {
		switch ((int)b) {
			case -1 : printf("- x ");
				break;
			case 1 : printf("+ x ");
				break;
			default : printf("%.2lf * x ", b);
		}
	}
	if (c) {
		switch ((int)c) {
			case -1 : printf("- 1 ");
				break;
			case 1 : printf("+ 1 ");
				break;
			default : printf("%.2lf ", c);
		}
	}
	printf("= 0\n");
}
double discriminant(double a, double b, double c) {
	double D = -1.0;
	if (a && b && c) {
		D = power(b,2) - 4 * a * c;
		if (D < 0) {
			printf("\n D = %.2lf;\n", D);
			printf("\n The discriminant has a negative value on the real axis does not exist!\n");
			return -1.0;
		} else {
			printf("\n D = %.2lf;\n", D);
		}
		return D;
	} else {
		printf("\n This equation has no discriminant!\n");
	}
	return D;
}
void roots(double dis, double a, double b, double c) {
	if (!b && !c) {
		printf("\n x1 = 0;\n x2 = 0;\n");
	} else {
		if (!b && dis == -1) {
			if ((a > 0 && c > 0) || (a < 0 && c < 0)) {
				printf("\n This equation has no roots!\n");
			}
			if ((a > 0 && c < 0) || (a < 0 && c > 0)) {
				printf("\n x1 = %.2lf;\n x2 = %.2lf;\n", _sqrt(_abs(c/a)), -_sqrt(_abs(c/a)));
			}
		}
		if (!c && dis == -1) {
			printf("\n x1 = 0;\n x2 = %.2lf;\n", -b/a);
		}
	}
	if (dis == 0) {
		printf("\n x1 = x2 = %.2lf;\n", -b/(2 * a));
	}
	if (dis > 0) {
		printf("\n x1 = %.2lf;\n", (-b + _sqrt(dis))/(2 * a));
		printf(" x2 = %.2lf;\n", (-b - _sqrt(dis))/(2 * a));
	}
}

