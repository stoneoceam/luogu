//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P1424

#include<iostream>
using namespace std;
int main() {
	int v = 250;
	long long x, n;
	cin >> x >> n;

	long long sum = 0;
	int day = x;
	for (int i = 0; i < n; i++) {
		if (day == 8)
			day = 1;
		if (day == 6 || day == 7) {
			day++;
		}
		else {
			sum += 250;
			day++;
		}
	}
	cout << sum;

	return 0;
}
