#include "print.h"
void _fileOpen(const char *file_name){
	printf("The file '%s' can't be opened!", file_name);
	return;
}

void _write_in_txt_file_one_element(FILE *fwt, TelephoneExchange *te, int i){
	fprintf(fwt, "|%-4d|%-10s %-14s|%-10s %-7s %-21s|%+-5d %-5d %-11d|%-10s %-14s|%-10s %-7s %-21s|%+-5d %-5d %-11d|%02d/%02d/%d|%02d:%02d:%02d|%02d:%02d:%02d|%-6.2lf|%-7.2lf|\n", 
	i, te[i].cal_person.name, te[i].cal_person.surname, 
	te[i].cal_address.city_name, te[i].cal_address.house_num, te[i].cal_address.streat, 
	te[i].cal_num.country_code, te[i].cal_num.city_code, te[i].cal_num.number,
	te[i].rec_person.name, te[i].rec_person.surname,
	te[i].rec_address.city_name, te[i].rec_address.house_num, te[i].rec_address.streat,
	te[i].rec_num.country_code, te[i].rec_num.city_code, te[i].rec_num.number,
	te[i].time_on.tm_mday, te[i].time_on.tm_mon, te[i].time_on.tm_year, 
	te[i].time_on.tm_hour, te[i].time_on.tm_min, te[i].time_on.tm_sec,
	te[i].time_off.tm_hour, te[i].time_off.tm_min, te[i].time_off.tm_sec,
	te[i].tariff.tariff, te[i].cost);
}
void write_in_txt_file(const char *file_name, TelephoneExchange *te, int from, int to){
	FILE *fwt;
	if((fwt = fopen(file_name, "wt"))){
		for (int i = from; i < to; ++i) {
			_write_in_txt_file_one_element(fwt, te, i);
		}
	} else {
		_fileOpen(file_name);
	}
	fclose(fwt);
}
void write_in_txt_file(const char *file_name, TelephoneExchange *te, int to){
	write_in_txt_file(file_name, te, 0, to);
}




void _write_in_bin_size(FILE *fwb, int from, int to){
	fwrite(&from, sizeof(int*), 1, fwb);
	fwrite(&to, sizeof(int*), 1, fwb);
}
void _write_in_bin_file_one_element(FILE *fwb, TelephoneExchange *te, int i){
	fwrite(&te[i],sizeof(TelephoneExchange),1,fwb);
}
void write_in_bin_file(const char *file_name, TelephoneExchange *te, int from, int to){
	FILE *fwb;
	if((fwb = fopen(file_name, "wb"))){
		_write_in_bin_size(fwb, from, to);
		for (int i = from; i < to; ++i) {
			_write_in_bin_file_one_element(fwb, te, i);
		}
	} else {
		_fileOpen(file_name);
	}
	fclose(fwb);
}
void write_in_bin_file(const char *file_name, TelephoneExchange *te, int to){
	write_in_bin_file(file_name, te, 0, to);
}


void _read_from_bin_file_size(FILE *frb, int* from, int* to) {
	fread(from, sizeof(int*), 1, frb);
	fread(to, sizeof(int*), 1, frb);
}
void _read_form_bin_file_one_element(FILE *frb, TelephoneExchange *te, int i){
	fread(&te[i], sizeof(TelephoneExchange), 1, frb);
}
void read_from_bin_file(const char *file_name, TelephoneExchange *te){
	FILE *frb;
	int from, to, key = 0;
	if((frb = fopen(file_name, "rb"))){
		_read_from_bin_file_size(frb, &from, &to);
		for (int i = from; i < to; ++i) {
			_read_form_bin_file_one_element(frb, te, i);
		}
	} else {
		_fileOpen(file_name);
	}
	fclose(frb);
}