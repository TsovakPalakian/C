void keyboard_input_in_file(TelephoneExchange *te, char *file_name, int number_of_elements) {
	FILE *fwt;
	if (!(fwt = fopen(file_name, "at"))) {
		printf("The file %s can't be opened!", file_name);
		return;
	}
	//printf("|%s|%s|%s|%s|%s|%s|%s|%s|%s|%s|\n", 
	//	"Name Surname","City home_num/apat_num Street","Code_cout code_city number",
	//	"Name Surname","City home_num/apat_num Street","Code_cout code_city number",
	//	"day/month/year","hour:min:sec","hour:min:sec","Tariff");
	for (int i = 0; i < number_of_elements; ++i) {
		
		printf("Caller's Name: ");
		scanf("%[^\n]%*c", te[i].cal_person.name);
		printf("Caller's Surname: ");
		scanf("%[^\n]%*c", te[i].cal_person.surname);

		printf("Caller's City: ");
		scanf("%[^\n]%*c", te[i].cal_address.city_name);
		printf("home_num/apat_num: ");
		scanf("%[^\n]%*c", te[i].cal_address.house_num);
		printf("Street: ");
		scanf("%[^\n]%*c", te[i].cal_address.streat);

		printf("Country code: ");
		scanf("%d", &te[i].cal_num.country_code);
		printf("City code: ");
		scanf("%d", &te[i].cal_num.city_code);
		printf("Phone number: ");
		scanf("%d", &te[i].cal_num.number);

		fflush(stdin);

		printf("Recepient Name: ");
		scanf("%[^\n]%*c", te[i].rec_person.name);
		printf("Recepient Surname: ");
		scanf("%[^\n]%*c", te[i].rec_person.surname);
		
		printf("Recepient City: ");
		scanf("%[^\n]%*c", te[i].rec_address.city_name);
		printf("home_num/apat_num: ");
		scanf("%[^\n]%*c", te[i].rec_address.house_num);
		printf("Street: ");
		scanf("%[^\n]%*c", te[i].rec_address.streat);

		printf("Country code: ");
		scanf("%d", &te[i].rec_num.country_code);
		printf("City code: ");
		scanf("%d", &te[i].rec_num.city_code);
		printf("Phone number: ");
		scanf("%d", &te[i].rec_num.number);

		printf("Day: ");
		scanf("%d", &te[i].time_on.tm_mday);
		printf("Month: ");
		scanf("%d", &te[i].time_on.tm_mon);
		printf("Year: ");
		scanf("%d", &te[i].time_on.tm_year);
		printf("Hour: ");
		scanf("%d", &te[i].time_on.tm_hour);
		printf("Minutes: ");
		scanf("%d", &te[i].time_on.tm_min);
		printf("Seconds: ");
		scanf("%d", &te[i].time_on.tm_sec);
		printf("Hour: ");
		scanf("%d", &te[i].time_off.tm_hour);
		printf("Minutes: ");
		scanf("%d", &te[i].time_off.tm_min);
		printf("Seconds: ");
		scanf("%d", &te[i].time_off.tm_sec);
		printf("Tariff: ");
		scanf("%lf", &te[i].tariff.tariff);

		fprintf(fwt, "|%-4d|%-10s %-14s|%-10s %-7s %-21s|%+-5d %-5d %-11d|%-10s %-14s|%-10s %-7s %-21s|%+-5d %-5d %-11d|%02d/%02d/%d|%02d:%02d:%02d|%02d:%02d:%02d|%-6.2lf|\n", 
		i, te[i].cal_person.name, te[i].cal_person.surname, 
		te[i].cal_address.city_name, te[i].cal_address.house_num, te[i].cal_address.streat, 
		te[i].cal_num.country_code, te[i].cal_num.city_code, te[i].cal_num.number,
		te[i].rec_person.name, te[i].rec_person.surname,
		te[i].rec_address.city_name, te[i].rec_address.house_num, te[i].rec_address.streat,
		te[i].rec_num.country_code, te[i].rec_num.city_code, te[i].rec_num.number,
		te[i].time_on.tm_mday, te[i].time_on.tm_mon, te[i].time_on.tm_year, 
		te[i].time_on.tm_hour, te[i].time_on.tm_min, te[i].time_on.tm_sec,
		te[i].time_off.tm_hour, te[i].time_off.tm_min, te[i].time_off.tm_sec,
		te[i].tariff.tariff);
	}
	fclose(fwt);
}