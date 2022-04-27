//原题链接 https://www.luogu.com.cn/problem/P2550

#include<iostream>
using namespace std;

typedef struct Number {
	int k[7] = { 0 };
}Number;

int main() {
	int n;
	cin >> n;
	int hh[7];//奖票号码
	for (int i = 0; i < 7; i++) {
		cin >> hh[i];
	}
	Number* kk = new Number[n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 7; j++) {
			cin >> kk[i].k[j];
		}
	}

	int ee[9] = { 0 };//每个奖的个数

	for (int i = 0; i < n; i++) {
		int e = 0;
		for (int j = 0; j < 7; j++) {
			for (int k = 0; k < 7; k++) {
				if (kk[i].k[j] == hh[k])
					e++;
			}
		}
		ee[8-e]++;
	}

	for (int i = 1; i < 8; i++) {
		cout << ee[i] << " ";
	}
	return 0;
}