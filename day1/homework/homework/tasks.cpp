#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#define PI 3.1415927

void task_1_circumference() {
	printf("\ttask_1: circumference\n\n");
	printf(" Enter the diameter of circle...\n");
	printf("  d = ");
	double d;
	scanf("%lf", &d);
	double L = PI * d;
	printf("\n The length of the circle is...\n");
	printf("  L = %0.7lf r.u.", L);
	printf("\n\n--------------------------------\n\n");
}

void task_2_triangle() {
	printf("\ttask_2: triangle\n\n");
	printf(" Enter the length of the cathetuses of the triangle...\n");
	
	double a, b;

	printf("  a = ");
	scanf("%lf", &a);

	printf("  b = ");
	scanf("%lf", &b);
	

	double c = sqrt(pow(a,2) + pow(b,2));
	printf("\n The hypotenuse of the triangle is ...\n  c = %0.7lf \n", c);

	double P = a + b + c;
	printf(" The perimeter of the triangle is...\n  P = %0.7lf", P);

	printf("\n\n--------------------------------\n\n");
}

void task_3_circle(){
	printf("\ttask_3: circle\n\n");
	printf(" Enter the circumference...\n");

	printf("  L = ");
	double L;
	scanf("%lf", &L);

	printf("\n The radius of the cicle is... \n  R = %0.7lf \n", L/(2 * PI));
	printf(" The area of the circle is... \n  S = %0.7lf \n", pow((L/2), 2)/PI);

	printf("\n--------------------------------\n\n");
}

void task_4_circle(){

	printf("\ttask_4: circle\n\n");
	printf(" Enter the area of the circle...\n");

	printf("  S = ");
	double S;
	scanf("%lf", &S);

	printf("\n The diameter of the circle is... \n  D = %0.7lf \n", 2 * sqrt(S/PI));
	printf(" The circumference is... \n  L = %0.7lf \n", 2 * sqrt(PI * S));

	printf("\n--------------------------------\n\n");
}

void task_5_triangle() {
	printf("\ttask_5: triangle\n\n");
	printf(" Enter the coordinates of the angle of the triangle...\n");

	double x1, y1, x2, y2, x3, y3;

	printf(" The angle A is...:\n");
	printf("  x1 = ");
	scanf("%lf", &x1);
	printf("  y1 = ");
	scanf("%lf", &y1);

	printf("\n");

	printf(" The angle B is...:\n");
	printf("  x2 = ");
	scanf("%lf", &x2);
	printf("  y2 = ");
	scanf("%lf", &y2);

	printf("\n");

	printf(" The angle C is...:\n");
	printf("  x3 = ");
	scanf("%lf", &x3);
	printf("  y3 = ");
	scanf("%lf", &y3);

	printf("\n");

	double a, b, c, S, p;
	a = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
	b = sqrt(pow((x3 - x1),2) + pow((y3 - y1),2));
	c = sqrt(pow((x3 - x2),2) + pow((y3 - y2),2));

	p = (a + b + c)/2;

	S = sqrt(p * (p - a) * (p - b) * (p - c));
	printf(" The perimeter of the triangle is...\n  P = %0.7lf \n", 2 * p);
	printf(" The area of the triangle is...\n  S = %0.7lf", S);

	printf("\n\n--------------------------------\n\n");
}

void task_6_swap_numbers(){
	printf("\ttask_6: swap numbers\n\n");
	printf(" Enter the values...\n");

	printf("  Before...\n");

	int A, B, C;
	printf("  A = ");
	scanf("%d", &A);
	printf("  B = ");
	scanf("%d", &B);
	printf("  C = ");
	scanf("%d", &C);

	printf("\n  After...\n");

	int tmpB, tmpC;

	tmpB = B;
	tmpC = C;
	B = A;
	C = tmpB;
	A = tmpC;

	printf("  A = %d\n", A);
	printf("  B = %d\n", B);
	printf("  C = %d\n", C);

	printf("\n--------------------------------\n\n");
}


void task_7_function(){
	printf("\ttask_7: function\n\n");
	printf(" Enter the function variable...\n");

	double x;
	printf("  x = ");
	scanf("%lf", &x);

	double y;
	y = 3 * pow(x,6) - 6 * pow(x,2) - 7;
	printf("\n The value of the function is...\n");
	printf("  y(%0.3lf) = %0.3lf", x, y);

	printf("\n\n--------------------------------\n\n");
}

void task_8_two_digit_number(){
	printf("\ttask_8: two-digit-number\n\n");
	printf(" Enter the two-digit-number...\n");

	int x, sum, multi;
	printf("  x = ");
	scanf("%d", &x);

	printf("\n The amount of two numbers is... \n");
	sum = (x % 10) + (x / 10);
	printf("  sum = %d\n", sum);

	printf(" The multiplication of two numbers is... \n");
	multi = (x % 10) * (x / 10);
	printf("  multi = %d", multi);

	printf("\n\n--------------------------------\n\n");
}

void task_9_geometric_mean(){
	printf("\ttask_9: geometric mean\n\n");
	printf(" Enter two nonnegative numbers...\n");

	double n, m;
	printf("  n = ");
	scanf("%lf", &n);
	printf("  m = ");
	scanf("%lf", &m);

	printf("\n The value of the geometrinc mean is...\n");
	
	printf("  G = %0.7lf", sqrt(n * m));

	printf("\n\n--------------------------------\n\n");
}

void task_10_system_of_the_linear_equations() {
	printf("\ttask_10: system of the linear equations\n\n");
	printf(" Enter the parameters of the system of the linear equations...\n");

	int A1, B1, C1, A2, B2, C2;

	printf("  A1 = ");
	scanf("%d", &A1);

	printf("  B1 = ");
	scanf("%d", &B1);

	printf("  C1 = ");
	scanf("%d", &C1);

	printf("  A2 = ");
	scanf("%d", &A2);

	printf("  B2 = ");
	scanf("%d", &B2);

	printf("  C2 = ");
	scanf("%d", &C2);

	printf("\n  %d * x + %d * y = %d\n", A1, B1, C1);
	printf("  %d * x + %d * y = %d\n\n", A2, B2, C2);

	printf(" The solution of the equation is...\n");
	double x, y;
	x = ((C1 * B2) - (C2 * B1))/((A1 * B2) - (A2 * B1));
	y = (C2 * A1 - C1 * A2)/(A1 * B2 - A2 * B1);
	printf("  x = %0.7lf", x);
	printf("  y = %0.7lf", y);

	printf("\n\n--------------------------------\n\n");
}

void task_11_cost_of_sweets() {
	printf("\ttask_11: cost_of_sweets\n\n");
	printf(" Enter the weight and cost...\n");

	double X, A, Y, B;

	printf("  weight of chocolates = ");
	scanf("%lf", &X);

	printf("  costs = ");
	scanf("%lf", &A);

	printf("  weight of toffee = ");
	scanf("%lf", &Y);

	printf("  costs = ");
	scanf("%lf", &B);

	printf("\n  weight of chocolates: %0.3lf kg, costs %0.2lf rub.\n", X, A);
	printf("  weight of toffee: %0.3lf kg, costs %0.2lf rub.\n", Y, B);

	double chCost = A/X;
	double tofCost = B/Y;
	double times = chCost/tofCost;

	printf("\n  One kilogram of chocolate candies costs %0.2lf rubles\n", chCost);
	printf("  One kilogram of toffee candies costs %0.2lf rubles\n", tofCost);

	printf("  Chocolate candies are %0.2lf times more expensive than toffee.\n", times);

	printf("\n--------------------------------\n\n");
}

void task_12_angles_in_radians() {
	printf("\ttask_12: angles_in_radians\n\n");
	printf(" Enter the value of the angle in degrees...\n");

	double alpha;
	printf("  alpha = ");
	scanf("%lf", &alpha);

	printf("\n The value of the alpha angle in radians is...\n");
	double rad;
	rad = alpha * PI/180;
	printf("  radians = %0.7lf", rad);

	printf("\n\n--------------------------------\n\n");
}

void task_variant_7(){
	printf("\ttask_variant_7: calculate the values of the equations z1 and z2\n\n");
	printf(" Enter the value of the angle in degrees...\n");

	double alpha;
	printf("  alpha = ");
	scanf("%lf", &alpha);

	printf("\n  z1 = cos^2(3*pi/8 - alpha/4) - cos^2(11*pi/8 + alpha/4)\n");
	printf("  z2 = (sqrt(2)/2)*sin(alpha/2)\n");

	printf("\n The values of the equations z1 and z2 is...\n");
	double rad, z1, z2;
	rad = alpha * PI/180;
	z1 = pow((cos(3 * PI/8 - alpha/4)),2) - pow((cos(11 * PI/8 + alpha/4)),2);
	z2 = (sqrt(2.0)/2)*sin(alpha/2);

	printf("  z1 = %0.7lf  and", z1);
	printf("  z2 = %0.7lf", z2);

	printf("\n\n--------------------------------\n\n");
}

void main(){
	task_1_circumference();
	task_2_triangle();
	task_3_circle();
	task_4_circle();
	task_5_triangle();
	task_6_swap_numbers();
	task_7_function();
	task_8_two_digit_number();
	task_9_geometric_mean();
	task_10_system_of_the_linear_equations();
	task_11_cost_of_sweets();
	task_12_angles_in_radians();
	task_variant_7();
	_getch();
}