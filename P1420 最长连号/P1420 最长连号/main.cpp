//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P1420

#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int* k = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> k[i];
	}

	int temp = k[0];
	int max = 1;
	int sum = 1;
	for (int i = 1; i < n; i++) {
		if (k[i] == (temp + 1)) {
			sum++;
			temp = k[i];
		}
		else {
			sum = 1;
			temp = k[i];
		}
		if (max < sum)
			max = sum;
	}

	cout << max;

	return 0;
}