#include "String.h"
#include<iostream>
using namespace std;

void main( void ){
	String s1("Privet!!!!");
	s1.show();
	s1.Set_str("Minsk!!!!!!");
	s1.show();
	String s2;
	s2.Set_str("12345 7890");   
	s2.show();   
	String s3 = s2; 
	s3.show();
	String *s;
	s = new String; 
	s->Set_str("123456");   
	s->show();    
	String *p;
	p = new String("No - No"); 
	p->show();
	delete s;    
	delete p;
}