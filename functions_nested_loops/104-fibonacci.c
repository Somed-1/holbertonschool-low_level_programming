#include <stdio.h>
#include <string.h>

#define MAX_DIGITS 1000

void strsum(const char* a, const char* b, char* result) {
int ai = strlen(a);
int bi = strlen(b);
int carry = 0;
int i = 0;

while (ai > 0 || bi > 0 || carry > 0) {
int num1 = (ai > 0) ? (a[--ai] - '0') : 0;
int num2 = (bi > 0) ? (b[--bi] - '0') : 0;

int sum = num1 + num2 + carry;
result[i++] = (sum % 10) + '0';
carry = sum / 10;
}

result[i] = '\0';

// Reverse the result string
int j = 0;
i--;
while (j < i) {
char temp = result[j];
result[j] = result[i];
result[i] = temp;
j++;
i--;
}
}

void fibonacci(int n) {
char a[MAX_DIGITS] = "1";
char b[MAX_DIGITS] = "2";
char temp[MAX_DIGITS];

printf("1, 2, ");
for (int i = 3; i <= n; i++) {
strsum(a, b, temp);
strcpy(a, b);
strcpy(b, temp);

printf("%s", b);
if (i < n) {
    printf(", ");
}
}
}

int main() {
fibonacci(98);
return 0;
}
