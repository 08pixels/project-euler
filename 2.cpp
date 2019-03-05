#include <bits/stdc++.h>
using namespace std;

int main() {
	int temp, answer = 0;
	int previous = 1, current = 1;

	while((previous + current) <= 4000000) {
		answer += (previous + current);
		
		temp = previous;
		previous = previous + 2 * current;
		current  = 2 * temp + 3 * current;
	}

	cout << answer << endl;
}

/* INSIGHT
	1  1    2     3       5         8       13
	x, y, x+y, x+2y, 2x + 3y, 3x + 5y, 5x + 8x

*/