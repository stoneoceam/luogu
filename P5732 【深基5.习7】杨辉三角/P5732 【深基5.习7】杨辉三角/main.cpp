//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P5732

#include<iostream>
using namespace std;

long long jiecheng(long long n) {
	if (n == 0)
		return 1;
	long long m = 1;
	for (long long i = 1; i <= n; i++) {
		m *= i;
	}
	return m;
}

long long C(long long a, long long b) {
	return jiecheng(a) / (jiecheng(b) * jiecheng(a - b));
}

int main() {
	long long n;
	cin >> n;

	for (long long i = 0; i < n; i++) {
		for (long long j = 0; j <= i; j++) {
			cout << C(i, j) << " ";
		}
		cout << endl;
	}

	return 0;
}