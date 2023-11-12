#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void multiplyStrings(char num1[], char num2[], char result[]) {
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int m[3000];

	for (int i = 0; i < len1 + len2; i++) {
		m[i] = 0;
	}

	for (int i = 0; i < len1; i++) {
		for (int j = 0; j < len2; j++) {
			m[i + j] += (num1[i] - '0') * (num2[j] - '0');
		}
	}

	int carry = 0;
	for (int i = 0; i < len1 + len2; i++) {
		int sum = m[i] + carry;
		m[i] = sum % 10;
		carry = sum / 10;
	}

	int index = len1 + len2 - 1;
	while (index >= 0 && m[index] == 0) {
		index--;
	}

	if (index == -1) {
		strcpy(result, "0");
	} else {
		int resultIndex = 0;
		while (index >= 0) {
			result[resultIndex++] = m[index] + '0';
			index--;
		}
		result[resultIndex] = '\0';
	}
}


int main(int argc, char *argv[]) {
	if (argc != 3) {
		printf("Error\n");
		return 98;
	}

	char *num1 = argv[1];
	char *num2 = argv[2];

	for (int i = 0; i < strlen(num1); i++) {
		if (!isdigit(num1[i])) {
			printf("Error\n");
			return 98;
		}
	}

	for (int i = 0; i < strlen(num2); i++) {
		if (!isdigit(num2[i])) {
			printf("Error\n");
			return 98;
		}
	}

	char result[1000];

	multiplyStrings(num1, num2, result);

	printf("%s\n", result);

	return 0;
}


