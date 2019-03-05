#include <bits/stdc++.h>
using namespace std;

int main() {
	int answer = 0;
	for(int i=1; i<1000; ++i)
		if(i%3 && i%5) continue;
		else answer += i;

	cout << answer << endl;
	return 0;
}
