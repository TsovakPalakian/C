#include<sstream>
#include "Print.h"

using namespace std;

Print::Print(void){
	this -> f1 = f1;
	this -> f2 = f2;
	this -> result = result;
	this -> math_oper = '+';
}
Print::Print(const Fractional& f1, const Fractional& f2){
	this -> f1 = f1;
	this -> f2 = f2;
}
Print Print::solve(char math_oper) {
	this -> math_oper = math_oper;
	this -> result = f1.operation(f2, math_oper);
	return *this;
}
Print Print::reduction(Fractional& fra) {
	return *this;
}
//void Print::print() {
//
//	result = result.reduction_of_fraction().integer_part();
//	
//	stringstream s, d;
//	
//	if (math_oper == '/') {
//		d << ":";
//	} else {
//		d << math_oper;
//	}
//	
//	s << f1.getNum() << '/' << f1.getDen() << " " << d.str() << " " 
//	  << f2.getNum() << '/' << f2.getDen() << " = ";
//	
//	if (!result.getInt_part()) {
//		if (!result.getNum()) {
//			cout << s.str() << "0";
//		} else {
//			cout << s.str() << result.getNum() << '/' << result.getDen() << endl;
//		}
//	} else {
//		if (!result.getNum()) {
//			cout << s.str() << result.getInt_part() << endl;
//		} else {
//			cout << s.str() << result.getInt_part() << "+" << result.getNum() << "/" << result.getDen() << endl;
//		}
//	}
//	
//	//cout << f1.getNum() << "   " << f2.getNum() << "  " << "   " << m << '\n' 
//	//	 << "- " << math_oper<< " - = " << n << " -\n"  
//	//	 << f1.getDen() << "   " << f2.getDen() << "  " << "   " << result.getDen() << '\n' << endl;
//}

void Print::print() {
	stringstream s;
	
	s << f1.getNum() << '/' << f1.getDen() << " = ";

	Fractional result = f1.reduction_of_fraction().integer_part();
	
	if (!result.getInt_part()) {
		if (!result.getNum()) {
			cout << s.str() << "0";
		} else {
			cout << s.str() << result.getNum() << '/' << result.getDen() << endl;
		}
	} else {
		if (!result.getNum()) {
			cout << s.str() << result.getInt_part() << endl;
		} else {
			cout << s.str() << result.getInt_part() << "+" << result.getNum() << "/" << result.getDen() << endl;
		}
	}
}