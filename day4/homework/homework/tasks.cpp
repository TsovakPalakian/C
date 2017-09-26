#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include "day4.h" 

void task_1() {
	int a = enter_an_integer("a");
	int b = enter_an_integer("b");
	int c = enter_an_integer("c");
	int d = enter_an_integer("d");
	int i = enter_an_integer("i");

	printf("\n Min: %d, Max: %d\n", min(a, b, c), max(a, b, c));
	printf("\n Min: %d, Max: %d\n", min(d, b, c), max(d, b, c));
	printf("\n Min: %d, Max: %d\n", min(d, i, c), max(d, i, c));
}
void task_2() {
	int n = enter_a_positive_integer("n");
	int m = enter_a_positive_integer("m");
	int p = enter_a_positive_integer("p");

	printf(" The sum of the factorials of %d, %d, %d is %d", 
		n, m, p, summation(4, factorial(n), factorial(m), factorial(p)));
}
void task_3() {
	double a = enter_any_number("a");
	if(!a){
		printf("\n This equation is not quadratic.\n");
		return;
	}
	double b = enter_any_number("b");
	double c = enter_any_number("c");

	form_of_equestion(a, b, c);
	double D = discriminant(a, b, c);
	roots(D, a, b, c);
}
void task_4() {
	printf(" %.10lf\n", power(-0.2, -0.2));
	printf(" %.10lf\n", power(-0.2, 0.2));
	printf(" %.10lf\n", power(0.2, -0.2));
	printf(" %.10lf\n", power(0.2, 0.2));
}
void task_5() {
	printf(" %.10lf\n", division(5, 3));
}
void task_6() {
	prime_numbers(1000);
}
void task_7() {
	perfect_integer(10000);
}
void task_8() {
	printf(" %lli", inverse(45354521520891458));
}
void task_9() {
	int n;
	int m;
	initialization_of_two_variables(n, m);
	printf(" n = %d, m = %d", n, m);
}
void task_10() {
	int a = enter_an_integer("a");
	int b = enter_an_integer("b");
	int c = enter_an_integer("c");

	printf(" %d : %d : %d\n", a, b, c);
	values_of_function(a, b, c);
	printf(" %d : %d : %d", a, b, c);

}
void task_11() {
	int a = enter_an_integer("a");
	int b = enter_an_integer("b");
	printf(" a = %d; b = %d;\n", a, b);

	swap(a, b);

	printf(" a = %d; b = %d;\n", a, b);
}

void task_12() {
	int n = enter_a_positive_integer("n");
	for (int i = 0; i <= n; i++) {
		printf(" F%d = %d\n", i, fibonacci_numbers(i));
	}
}

void task_13() {
	int a = enter_an_integer("a");
	printf(" sum = %d", summation_number(a));
}
void task_14() {
	int a = enter_an_integer("a");
	int b = enter_an_integer("b");
	printf(" gcd = %d", GCD(a, b));
}
void task_15() {
	srand(time(NULL));
	int n;
	n = 7 + rand() % 51;
	guess_the_number(n);
}

void task_16() {}


int main(){
	//task_1();
	//task_2();
	//task_3();
	//task_4();
	//task_5();
	//task_6();
	//////////////task_7();
	//task_8();
	
	//task_9();
	
	//task_10();
	//task_11();

	//task_12();
	//task_13();
	//task_14();
	//task_15();
	/////////////task_16();


	//printf("%d", power(0,-1)); 

	_getch();
	return 0;
}