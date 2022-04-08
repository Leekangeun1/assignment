#include <iostream>
using namespace std;
long long arr[1000000] = { 0, };
long long prime[1000000] = { 2, 3, 5, };

int main() {
	long long min, max;
	cin >> min >> max;
	int range = max - min + 1;
	int primeLocation = 3, primecheck = 7, i, rmd;

	for (long long i = 0; i <= max - min; i++)
		arr[i] = i + min;
	while (primecheck < 1000000) {
		for (i = 1; prime[i] * prime[i] <= primecheck; i++) {
			if (!(primecheck % prime[i])) {
				i = 0;
				primecheck = primecheck + 2;
				break;
			}
		}
		if (i) {
			prime[primeLocation++] = primecheck;
			primecheck = primecheck + 2;
		}
	}
	
	for (i = 0; i < primeLocation; i++) {
		rmd = min % (prime[i] * prime[i]);
	}

	cout << primeLocation;
}
