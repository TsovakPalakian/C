#include<stdio.h>
#include "te_struct.h"
#include "table_template_and_border.h"

void _printTE(TelephoneExchange *pte, int i) {
	 
	printf("|%-4d|%-10s %-14s|%-10s %-7s %-21s|%+-5d %-5d %-11d|%-10s %-14s|%-10s %-7s %-21s|%+-5d %-5d %-11d|%02d/%02d/%d|%02d:%02d:%02d|%02d:%02d:%02d|%-6.2lf|%-7.2lf|\n", 
		i, pte[i].cal_person.name, pte[i].cal_person.surname, 
		pte[i].cal_address.city_name, pte[i].cal_address.house_num, pte[i].cal_address.streat, 
		pte[i].cal_num.country_code, pte[i].cal_num.city_code, pte[i].cal_num.number,
		pte[i].rec_person.name, pte[i].rec_person.surname,
		pte[i].rec_address.city_name, pte[i].rec_address.house_num, pte[i].rec_address.streat,
		pte[i].rec_num.country_code, pte[i].rec_num.city_code, pte[i].rec_num.number,
		pte[i].time_on.tm_mday, pte[i].time_on.tm_mon, pte[i].time_on.tm_year, 
		pte[i].time_on.tm_hour, pte[i].time_on.tm_min, pte[i].time_on.tm_sec,
		pte[i].time_off.tm_hour, pte[i].time_off.tm_min, pte[i].time_off.tm_sec,
		pte[i].tariff.tariff, pte[i].cost);

	_created_table_template_tail();
}

void printAll(TelephoneExchange *pte) {
	
	extern const int N;
	
	_created_table_template_head();
	for (int i = 0; i < N; ++i) {
		_printTE(pte, i);
	}
}

void printi(TelephoneExchange *pte, int i, int key) {
	if (!key) {
		_created_table_template_head();
	}
	_printTE(pte, i);

}