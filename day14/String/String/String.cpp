#include "String.h"
#include<iostream>
#include<iomanip>
using namespace std;

void String:: Set_str ( char* s){
	delete []str;
	len = strlen(s);
	str = new char [len+1]; 
	if(!str) exit(1);
	strcpy(str,s);
}
String :: String( void){
	str = NULL; 
	len = 0; 
	cout<<"Konstructor   void\n";
}
String :: String( char* s){
	str = NULL;
	Set_str(s);
	cout<<"Konstructor\n";
}
String :: String( const String &ob){
	str = NULL;
	Set_str( ob.str );
	cout<<"Konstructor copy!!!!\n";
}
void String :: show (void) const {
	cout << setw(len+6) << setiosflags(ios::left)
	<< str<< len<< endl;
}
String :: ~String (void){ 
	delete []str;
	str = NULL;
	cout<<"DESTRUCTOR\n";  
}