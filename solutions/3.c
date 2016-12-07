#include <stdio.h>

int main() {
	long long int target_num = 600851475143;
	long long int prime_num = 3;
	while (target_num > 1 && prime_num < target_num) {
		while (!(target_num % prime_num)) {
			target_num /= prime_num;
		}
		if (target_num == 1) break;
		prime_num++;
	}
	printf("%lld\n", prime_num);
	return 0;
}