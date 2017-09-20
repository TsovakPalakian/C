#include<iostream>
#include<sstream>
#include "Fractional_Print.h"

using namespace std;
Fractional Fractional::operation(const Fractional& fra, char& math_oper){
	Fractional result;
	result.den = den * fra.den;
	switch (math_oper) {
		case '+' : result.num = num * fra.den + den * fra.num;
			break;

	    case '-' : result.num = num * fra.den - den * fra.num;
			break;

	    case '*' : result.num = num * fra.num;
			break;

		case '/' : {
						result.num = num * fra.den;
						result.den = den * fra.num;
				   }
			break;
	}
	return result;
}

void Print::print() {
	int n = result.getNum()/result.getDen();
	int m = result.getNum() - n * result.getDen();
	stringstream s, d;
	if (math_oper == '/') {
		d << ":";
	} else {
		d << math_oper;
	}
	s << f1.getNum() << '/' << f1.getDen() << " " << d.str() << " " 
	  << f2.getNum() << '/' << f2.getDen() << " = " << n;
	if (!m) {
		 cout << s.str() << endl;
	} else {
		cout << s.str() << '+' << m << '/' << result.getDen() << endl;
	}
	//cout << f1.getNum() << "   " << f2.getNum() << "  " << "   " << m << '\n' 
	//	 << "- " << math_oper.getOper()<< " - = " << n << " -\n"  
	//	 << f1.getDen() << "   " << f2.getDen() << "  " << "   " << result.getDen() << endl;
}