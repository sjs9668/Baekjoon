#include <stdio.h>

int main() {
	int num[8];
	int cnt = 0;
	for (int i = 0; i < 8; i++) {
		scanf("%d", &num[i]);
		if (num[i] == i + 1) {
			cnt++;
		}
		else if (num[i] == 8 - i) {
			cnt--;

		}

	}
	if (cnt == 8) {
		printf("ascending");
	}
	else if (cnt == -8) {
		printf("descending");
	}
	else {
		printf("mixed");
	}
	return 0;
}