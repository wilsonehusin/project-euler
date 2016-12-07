#include <stdio.h>

int main() {
	int max = 1000;
	int sum = 0;
	int i;
	for (i = 0; i < max; i++) {
		if (!(i % 3) || !(i % 5)) { sum += i; }
	}
	printf("%d\n", sum);
	return 0;
}