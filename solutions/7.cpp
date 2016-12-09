#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int number) {
	int i = 2;
	while (i < number) {
		if (!(number % i)) {
			return false;
		}
		i++;
	}
	return true;
}

int main() {
	vector<int> primes;
	int index = 10001;
	int i = 2;
	while (primes.size() < index) {
		if (isPrime(i)) {
			cout << "prime[" << primes.size() << "] = " << i << endl;
			primes.push_back(i);
		}
		i++;
	}
	cout << primes[index - 1] << endl;
	return 0;
}