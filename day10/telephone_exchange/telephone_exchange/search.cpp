#include "te_struct.h"
#include<string.h>
#include "print.h"

void search(TelephoneExchange *pte, char* sought_value) {
	extern const int N;
	int key = 0;
	for (int i = 0; i < N; ++i) {
		if(!strncmp(sought_value, pte[i].cal_person.name, strlen(sought_value))) {
			printi(pte, i, key);
			key = -1;
		}
		if(!strncmp(sought_value, pte[i].cal_person.surname, strlen(sought_value))) {
			printi(pte, i, key);
			key = -1;
		}
		if(!strncmp(sought_value, pte[i].cal_address.city_name, strlen(sought_value))) {
			printi(pte, i, key);
			key = -1;
		}
	}
}
void search(TelephoneExchange *pte, double from, double to) {
	extern const int N;
	int key = 0;
	for (int i = 0; i < N; ++i) {
		if (pte[i].cost >= from && pte[i].cost <= to) {
			printi(pte, i, key);
			key = -1;
		}
	}
}