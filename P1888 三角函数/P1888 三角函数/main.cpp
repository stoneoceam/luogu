//原题链接 https://www.luogu.com.cn/problem/P1888

#include<iostream>
using namespace std;

void swap(unsigned long long* k) {
	for (int i = 0; i < 3 - 1; i++) {
		for (int j = 0; j < 3 - 1 - i; j++) {
			if (k[j] > k[j + 1]) {
				unsigned long long temp;
				temp = k[j];
				k[j] = k[j + 1];
				k[j + 1] = temp;
			}
		}
	}
}

//更相减损法
unsigned long long gcd(unsigned long long a, unsigned long long b) {
	while (a != b) {
		if (a > b) {
			a = a - b;
		}
		else{
			b = b - a;
		}
	}
	return a;
}

int main() {
	unsigned long long k[3];
	cin >> k[0] >> k[1] >> k[2];
	swap(k);

	unsigned long long a = k[0], b = k[2];
	cout << a / gcd(a, b) << '/' << b / gcd(a, b);

	return 0;
}
