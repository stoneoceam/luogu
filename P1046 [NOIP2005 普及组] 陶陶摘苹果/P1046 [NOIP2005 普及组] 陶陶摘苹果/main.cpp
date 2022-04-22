//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P1046

#include<iostream>
using namespace std;
int main() {
	int k[10];
	for (int i = 0; i < 10; i++) {
		cin >> k[i];
	}
	int h;
	cin >> h;
	h = h + 30;

	int sum = 0;
	for (int i = 0; i < 10; i++) {
		if (h >= k[i])
			sum++;
	}

	cout << sum;

	return 0;
}