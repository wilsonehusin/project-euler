#include <stdio.h>

int main() {
	int n = 1;
	int div;
	while (1) {
		div = 1;
		while (1) {
			if (div == 21) {
				printf("%d\n", n);
				return 0;
			}
			if (n % div) {
				break;
			}
			div++;
		}
		n++;
	}
}