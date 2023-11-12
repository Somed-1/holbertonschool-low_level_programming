#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void multiply(char *num1, char *num2) {
	int i;
	int j;
	int digit1, digit2;
	int sum;
	int carry;
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int *result = (int *)malloc(sizeof(int) * (len1 + len2));
	
	if (result == NULL) {
		printf("Memory allocation error\n");
		return;
	}

	for (i = 0; i < len1 + len2; i++) {
		result[i] = 0;
	}

	for (i = len1 - 1; i >= 0; i--) {
		digit1 = num1[i] - '0';
		carry = 0;

		for (j = len2 - 1; j >= 0; j--) {
			 digit2 = num2[j] - '0';
			 sum = digit1 * digit2 + result[i + j + 1] + carry;
			result[i + j + 1] = sum % 10;
			carry = sum / 10;
		}

		result[i] += carry;
	}

	i = 0;
	while (i < len1 + len2 && result[i] == 0) {
		i++;
	}

	if (i == len1 + len2) {
		printf("0\n");
		free(result);
		return;
	}

	for (; i < len1 + len2; i++) {
		printf("%d", result[i]);
	}
	printf("\n");

	free(result);
}

int main(int argc, char *argv[]) {
	int i, j;
	if (argc != 3) {
		printf("Error\n");
		return 98;
	}

	for (i = 1; i < 3; i++) {
		for (j = 0; argv[i][j] != '\0'; j++) {
			if (!isdigit(argv[i][j])) {
				printf("Error\n");
				return 98;
			}
		}
	}

	multiply(argv[1], argv[2]);

	return 0;
}

