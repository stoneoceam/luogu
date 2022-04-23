//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P5718

#include<iostream>
using namespace std;

void swap(int* k,int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (k[j] > k[j + 1]) {
				int temp;
				temp = k[j];
				k[j] = k[j + 1];
				k[j + 1] = temp;
			}
		}
	}
}

int main() {
	int n;
	cin >> n;
	int* k = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> k[i];
	}

	swap(k, n);
	
	cout << k[0];

	return 0;
}