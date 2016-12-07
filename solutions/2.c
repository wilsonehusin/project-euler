#include <stdio.h>

int main() {
	int max = 4000000;
	int a = 1;
	int b = 2;
	int n = a + b;
	int sum = 2;
	while (n < max) {
		if (!(n % 2)) {	sum += n; }
		a = b;
		b = n;
		n = a + b;
	}
	printf("%d\n", sum);
	return 0;
}