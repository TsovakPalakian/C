#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include "te_struct.h"
#include "sort.h"
#include "search.h"
#include "file.h"
#include "keyboard_input.h"

//bool sort_by_callers_city(TelephoneExchange *pte, int i, int j) {
//	return strcmp(pte[i].cal_address.city_name, pte[j].cal_address.city_name) > 0;
//}

void main(void) {
	TelephoneExchange te[1];
	keyboard_input_in_file(te, "txt.txt", 1);
	//char str [80];
 // float f;
 // FILE * pFile;

 // pFile = fopen ("myfile.txt","w+");
 // fprintf (pFile, "%f %s", 3.1416, "PI");
 // rewind (pFile);
 // fscanf (pFile, "%f%s", &f, str);
 // //fscanf (pFile, "%s", str);
 // fclose (pFile);
 // printf ("I have read: %f and %s \n",f,str);

	//extern TelephoneExchange te[];
	//init(te);


	//write_in_txt_file("tel_exchange.txt", te, 2);
	//write_in_bin_file("tel_1.bin", te, 0, 1);
	//write_in_bin_file("tel_2.bin", te, 1, 2);
	/*write_in_bin_file("tel_3.bin", te, 0, 3);


	TelephoneExchange tt[3];
	read_from_bin_file("tel_3.bin", tt);
	printAll(tt);*/

	//printAll(te);
	//search(te, 0, 600);
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