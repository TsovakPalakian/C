#include<string.h>
#include "te_struct.h"
#include "print.h"
#include "sorting_type.h"
#include "swap.h"

extern const int N;

void _subtract(TelephoneExchange *pte, int i) {
	pte[i].time_on.tm_year = pte[i].time_on.tm_year - 1900;
	pte[i].time_off.tm_year = pte[i].time_off.tm_year - 1900;
}
void _add(TelephoneExchange *pte, int i) {
	pte[i].time_on.tm_year = pte[i].time_on.tm_year + 1900;
	pte[i].time_off.tm_year = pte[i].time_off.tm_year + 1900;
}

void full_time_and_sum(const char city_name[], TelephoneExchange *pte, int &time, double &sum) {
	for (int i = 0; i < N; ++i) {
		if (!strcmp(city_name, pte[i].cal_address.city_name)) {
			_subtract(pte, i);
			time = (int) difftime(mktime(&pte[i].time_off), mktime(&pte[i].time_on));
			sum += pte[i].cost;
			_add(pte, i);
		}
	}
}

void sort(TelephoneExchange *pte, bool (*fun)(TelephoneExchange*, int, int)) {
	int i, j, k;
	for (i = 0; i < N; ++i) {
		k = i;
		for (j = i + 1; j < N; ++j) {
			if (fun(pte, k, j)) {
				k = j;
			}
		}
		_swap(pte, i, k);
	}
}

void sort(TelephoneExchange *pte, int sorting_type) {
	
	switch(sorting_type) {
		case 1 : sort(pte, sort_by_name_ascending);
			break;
		case -1 : sort(pte, sort_by_name_descending);
			break;
		case 2 : sort(pte, sort_by_city_ascending);
			break;
		case -2 : sort(pte, sort_by_city_descending);
			break;
		case 3 : sort(pte, sort_by_cost_ascending);
			break;
		case -3 : sort(pte, sort_by_cost_descending);
			break;
	}

}

void init(TelephoneExchange *pte) {
	extern const int N;
	
	for (int i = 0; i < N; ++i) {
		_subtract(pte, i);
		pte[i].cost = difftime(mktime(&pte[i].time_off), mktime(&pte[i].time_on))/60 * pte[i].tariff.tariff;
		_add(pte, i);
	}
}