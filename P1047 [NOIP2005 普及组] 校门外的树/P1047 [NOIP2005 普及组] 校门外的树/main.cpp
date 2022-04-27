//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P1047

#include<iostream>
using namespace std;
int main() {
	int L, n;
	cin >> L >> n;
	int* k = new int[L+1];
	for (int i = 0; i <= L; i++) {
		k[i] = 1;
	}
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		for (int j = a; j <= b; j++) {
			k[j] = 0;
		}
	}

	int sum = 0;
	for (int i = 0; i <= L; i++) {
		if (k[i] == 1)
			sum++;
	}

	cout << sum;
	return 0;
}