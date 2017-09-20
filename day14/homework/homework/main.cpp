#include<iostream>
#include "Fractional_Print.h"

void main(void) {
	Fractional f1(5, 1);
	Fractional f2(5, 2);
	Fractional res;

	Operational add('+');
	res = f1.operation(f2,add);
	Print print(f1, f2, res, add);
	print.print();

	Operational dif('-');
	res = f1.operation(f2, dif);
	Print print1(f1, f2, res, dif);
	print1.print();
	system("pause");
}