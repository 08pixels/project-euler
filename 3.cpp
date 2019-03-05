#include <bits/stdc++.h>
#define ull unsigned long long int
using namespace std;

int main() {
	ull number = 600851475143;

	for(ull i = 2; i * i <= number; ++i) {
		while(number % i == 0)
			number /= i;
	}

	cout << number << endl;
	return 0;
}
