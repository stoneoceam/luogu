//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P1428

#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int* k = new int[n];
	int* h = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> k[i];
	}

	for (int i = 0; i < n; i++) {
		int hh = 0;
		for (int j = 0; j < i; j++) {
			if (k[j] < k[i])
				hh++;
		}
		h[i] = hh;
	}

	for (int i = 0; i < n; i++) {
		cout << h[i] << " ";
	}
	return 0;
}
