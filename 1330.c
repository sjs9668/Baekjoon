#include <stdio.h>

int main(void){
	int num1, num2;
	scanf_s("%d%d", &num1, &num2);
	if (num1 > num2)
	{
		printf(">\n");
	}
	else if (num1 < num2)
	{
		printf("<\n");
	}
	else if (num1 == num2){
		printf("==\n");
	}
	else{
		printf("수를 잘못입력함\n");
	}
	return 0;
}