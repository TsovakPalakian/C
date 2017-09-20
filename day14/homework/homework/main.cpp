#include<iostream>
#include "Fractional_Print.h"

void main(void) {
	Fractional f1(5, 1);
	Fractional f2(5, 2);
	Fractional res;
	Print p(f1, f2, res);

	p.solve('-').print();
	p.solve('+').print();
	p.solve('*').print();
	p.solve('/').print();

	system("pause");
}