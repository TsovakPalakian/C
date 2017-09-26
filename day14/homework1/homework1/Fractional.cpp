#include "Fractional.h"
#include<math.h>
#include<sstream>
#include<iostream>

using namespace std;

Fractional::Fractional(void) {
	this -> num = 1;
	this -> den = 1;
	this -> int_part = 0;
}
Fractional::Fractional(int num, int den) {
	this -> num = num;
	this -> den = den;
	this -> int_part = 0;
}

void Fractional::setNum(int num) {
	this -> num = num;
}
int Fractional::getNum() {
	return this -> num;
}
void Fractional::setDen(int den) {
	this -> den = den;
}
int Fractional::getDen() {
	return this -> den;
}
void Fractional::setInt_part(int int_part) {
	this -> int_part = int_part;
}
int Fractional::getInt_part() {
	return this -> int_part;
}
int maxValue(int num, int den) {
	return (abs(num) > abs(den)) ? abs(num) : abs(den);
}

Fractional Fractional::integer_part() {
	Fractional result;

	int n = num/den;
	int m = num - n * den;

	result.setNum(m);
	result.setDen(den);
	result.setInt_part(n);

	return result;
}
Fractional Fractional::reduction_of_fraction() {
	Fractional result;
	
	int n = maxValue(num, den);

	for (int i = 2; i < n; ++i) {
		if (num % i == 0 && den % i == 0) {
			num /= i;
			den /= i;
			n = maxValue(num, den);
			i = 1;
		}
	}

	result.num = num;
	result.den = den;

	return result;
}
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