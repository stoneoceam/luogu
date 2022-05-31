//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P1304

#include<iostream>
#include<cmath>
using namespace std;

int prime_number(int n) {
	if (n == 0 || n == 1)
		return 0;
	if (n == 2)
		return 1;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0)
			return 0;
	}
	return 1;
}


int main() {
	int n;
	cin >> n;
	if (n >= 2) {
		for (int i = 2; i <= n; i = i + 2) {
			int flag = 1;
			for (int j = 0; j <= i/2; j++) {
				if (prime_number(j) && prime_number(i - j)) {
					cout << i << "=" << j << "+" << i - j << endl;
					flag = 0;
				}
				if (!flag)
					break;
			}

		}
	}
	return 0;
}