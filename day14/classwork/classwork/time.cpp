//#include<iostream>
//#include "Time.h"
//using namespace std;
//
//Time :: Time() { 
//	hour = 0; minute =  0; second = 0; 
//}
//Time :: Time( int hr, int min, int sec){
//	Set_hour(hr);
//	Set_minute(min);
//	Set_second(sec);
//}
//void Time :: Set_hour (int Hour){
//	hour = (Hour>=0 && Hour<24) ? Hour : 0; 
//}
//int Time :: Set_minute (int Minute){
//	if(Minute < 0 || Minute >=60 ) {
//		cout<<"Error minute!!!!\n"; 
//		minute = 0; return 0;
//	}
//	minute =  Minute; return 1;
//}
////int Time :: Set_ second (int Second){. . . . . }
//void Time :: printNormal(){
//	cout<<(hour<10 ? "0" : "") <<hour<<":" 
//	<<(minute<10 ? "0" : "")<<minute<<":"
//	<<(second<10 ? "0" : "")<<second<<endl;
//}
//void Time :: printStandart(){
//	cout<<((hour == 0 || hour == 12) ? 12 : hour%12)
//	<<":"<<(minute<10 ? "0" : "")<<minute<<":"
//	<<(second<10 ? "0" : "")<<second
//	<<(hour<12 ? " AM" : " PM")<<endl;
//}