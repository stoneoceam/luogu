//原题链接 https://www.luogu.com.cn/problem/P4956

#include<iostream>
using namespace std;
int main() {
	//52周 = 364X + 1092k

	int n;
	cin >> n;
	for (int i = 1;; i++) {
		for (int j = 1;j<=100; j++) {
			if (1092 * i + 364 * j == n) {
				cout << j << endl << i;
				return 0;
			}
		}
	}
}