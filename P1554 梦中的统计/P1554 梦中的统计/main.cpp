//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P1554

#include<iostream>
using namespace std;

void number(int* kk, int n) {
	while (n) {
		int i = n % 10;
		kk[i]++;
		n = n / 10;
	}
}

int main() {
	int kk[10] = { 0 };
	int a, b;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		number(kk, i);
	}

	for (int i = 0; i < 10; i++) {
		cout << kk[i] << " ";
	}
	return 0;
}