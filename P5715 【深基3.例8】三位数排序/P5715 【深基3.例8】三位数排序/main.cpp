//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P5715

#include<iostream>
using namespace std;

void Ascending(int* k) {
	for (int i = 0; i < 3 - 1; i++) {
		for (int j = 0; j < 3 - 1 - i; j++) {
			int temp;
			if (k[j] > k[j + 1]) {
				temp = k[j];
				k[j] = k[j + 1];
				k[j + 1] = temp;
			}
		}
	}
}


int main() {
	int k[3];
	cin >> k[0] >> k[1] >> k[2];

	Ascending(k);

	cout << k[0] << " " << k[1] << " " << k[2];
	return 0;
}
