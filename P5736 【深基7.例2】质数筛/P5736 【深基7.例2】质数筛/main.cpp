//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P5736

#include<iostream>
#include<cmath>
using namespace std;

int is_prime(int n) {
	if (n == 1)
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
	int* k = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> k[i];
	}

	for (int i = 0; i < n; i++) {
		if (is_prime(k[i]))
			cout << k[i] << " ";
	}

	return 0;
}
