#ifndef PRINT_H
#define PRINT_H

#include<iostream>
#include "Fractional.h"

class Print {
	private:
		Fractional f1;
		Fractional f2;
		Fractional result;
		char math_oper;
	public:
		Print(void);
		Print(const Fractional&, const Fractional&);
		Print reduction(Fractional&);
		Print solve(char);
		void print();
};

#endif