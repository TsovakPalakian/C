#include<stdio.h>

void _border(){
	for (int i = 0; i < 232; ++i) {
		printf("-");
	}
	puts("");
}
void _created_table_template_head() {
	_border();
	printf("|%-4s|%17s%-8s|%27s%-13s|%15s%-8s|%17s%-8s|%27s%-13s|%15s%-8s|%7s%-3s|%-8s|%-8s|%-6s|%6s%-1s|\n", 
		"#","Caller","","Address","","Phone number","",
		"Recepient","","Address","","Phone number","",
		"Date","","TimeOn","TimeOff",
		"Tariff","Cost","");
	_border();
}
void _created_table_template_tail() {
	_border();
}