#include <stdio.h>
#include <math.h>

int getDigit(int number, int index) {
	number = number / pow(10, index);
	return number % 10;
}

int isPalindrome(int x) {
	int a = x;
	int numlength = 0;
	while (a > 0) {
		a /= 10;
		numlength++;
	}
	int i;
	for (i = 0; i < numlength/2; i++) {
		if (getDigit(x, i) != getDigit(x, numlength - i - 1)) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int limit = 1000;
	int max = 0;
	int i, j;
	for (i = limit; i > 0; i--) {
		for (j = limit; j > 0; j--) {
			if ((i * j) > max) {
				if (isPalindrome(i * j)) {
					max = i * j;
				}
			}
		}
	}
	printf("%d\n", max);
	return 0;
}