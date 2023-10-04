#include <stdio.h>

int main(){
	int year1;
	scanf_s("%d", &year1);
	if (year1 %4 == 0 && year1 % 100 != 0 || year1 % 400 == 0 ){
		printf("1\n");
	}
	else{
		printf("0\n");
	}
	return 0;
}