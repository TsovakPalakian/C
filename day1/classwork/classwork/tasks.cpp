#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<locale.h>

void print_surname_by_the_snake() {
	printf("\ttask_1: Print your surname by the snake.\n\n");
	printf(" Enter your surname...\n");
	printf("  surname: ");

	char ch[100];

	scanf("%s", &ch);
	printf("\n");

	int i;
	for(i = 0; i < strlen(ch); i++){
		if (i % 2 == 0) {
			printf("  %c\n", ch[i]);
		} else {
			printf("\t%c\n", ch[i]);
		}
	}
	printf("\n\n---------------------------------------\n\n");
}

void print_rectangle() {
	printf("\ttask_2: Print rectangle.\n\n");
	printf(" *********\n");
	int i;
	for(i = 0; i < 17; i++) {
		printf(" *\t *\n");
	}
	printf(" *********\n");
}

void main(){
	print_surname_by_the_snake();
	print_rectangle();
	_getch();
}