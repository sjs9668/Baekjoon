#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>

//���� 1152�� �ڵ�
char arr[10000001];
int main() {
	gets(arr);
	int count = 0;
	for (int i = 0; i < strlen(arr); i++) {
		if (i == 0) {
			if (arr[i] != ' ') {
				count++;
			}
			continue;
		}
		if (arr[i] != ' ' && arr[i - 1] == ' ') {
			count++;
		}
	}
	printf("%d\n", count);
}