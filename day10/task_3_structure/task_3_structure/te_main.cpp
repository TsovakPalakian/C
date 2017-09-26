#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include "te_struct.h"
#include "te_function.h"
#include "search.h"

//bool sort_by_callers_city(TelephoneExchange *pte, int i, int j) {
//	return strcmp(pte[i].cal_address.city_name, pte[j].cal_address.city_name) > 0;
//}

void main(void) {
	extern TelephoneExchange te[];
	init(te);
	printAll(te);
	search(te, 0, 600);
	//printf("%d", );
	//int time;
	//double sum = 0;
	//char city[] = "Moscow";
	//full_time_and_sum(city, te, time, sum);
	//printf(" Total time and cost of a call to %s: %d seconds and %.2lf rubles. ", city, time, sum);

	//sort(te, 3);
	//printAll(te);

	printf("\n %d microseconds\n", clock());

	system("pause");
}