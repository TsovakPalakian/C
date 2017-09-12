#include<time.h>

struct Person {
	char *name;
	char *surname;
};

struct Address {
	char *city_name;
	char *house_num;
	char *streat;
};

struct Phone_Number {
	int country_code;
	int city_code;
	int number;
};

struct Tariff {
	double tariff;
};

struct TelephoneExchange{
	Person cal_person;
	Address cal_address;
	Phone_Number cal_num;
	Person rec_person;
	Address rec_address;
	Phone_Number rec_num;
	tm time_on;
	tm time_off;
	Tariff tariff;
	double cost;
};