#include <stdio.h>

int main() {
	long int limit = 100;
	long int sumsquare = 0;
	long int squaresum = 0;

	int i;
	for (i = 1; i <= limit; i++) {
		sumsquare = sumsquare + (i * i);
		squaresum = squaresum + i;
	}
	squaresum = squaresum * squaresum;
	printf("%ld\n", squaresum - sumsquare);
	return 0;
}