#include<string.h>
#include "te_struct.h"


bool sort_by_name_ascending(TelephoneExchange *pte, int i, int j) {
	return  strcmp(pte[i].cal_person.name, pte[j].cal_person.name) > 0;
}
bool sort_by_name_descending(TelephoneExchange *pte, int i, int j) {
	return  strcmp(pte[i].cal_person.name, pte[j].cal_person.name) < 0;
}
bool sort_by_city_ascending(TelephoneExchange *pte, int i, int j) {
	return  strcmp(pte[i].cal_address.city_name, pte[j].cal_address.city_name) > 0;
}
bool sort_by_city_descending(TelephoneExchange *pte, int i, int j) {
	return  strcmp(pte[i].cal_address.city_name, pte[j].cal_address.city_name) < 0;
}

bool sort_by_cost_ascending(TelephoneExchange *pte, int i, int j) {
	return  pte[i].cost > pte[j].cost;
}
bool sort_by_cost_descending(TelephoneExchange *pte, int i, int j) {
	return  pte[i].cost < pte[j].cost;
}