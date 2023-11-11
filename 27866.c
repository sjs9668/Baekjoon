#include<stdio.h>

int main()
{
    char input[1000];
    int num;

    scanf("%s", input);
    scanf("%d", &num);

    printf("%c", input[num - 1]);

    return 0;
}