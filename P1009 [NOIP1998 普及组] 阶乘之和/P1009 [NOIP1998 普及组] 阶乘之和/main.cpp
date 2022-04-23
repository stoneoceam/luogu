//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P1980

#include<iostream>
using namespace std;



int main() {
	long n;
	int x;
	cin >> n >> x;

	long sum = 0;
	for (long i = 1; i <= n; i++) {
		long num = i;
		long c = 0;
		while (num != 0) {
			c = num % 10;
			num = num / 10;
			if (c == x) sum++;
		}
	}

	cout << sum;

	return 0;
}