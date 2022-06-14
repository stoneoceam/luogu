//原题链接 https://www.luogu.com.cn/problem/P1591

#include<iostream>

using namespace std;
int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n, a;
		cin >> n >> a;
		int kk[100000] = {0};
		kk[1] = 1;

		//高精×单精 求阶乘
		int len = 1;//阶乘数的长度
		int temp = 0;//进位数
		for (int j = 1; j <= n; j++) {
			for (int k = 1; k <= len; k++) {
				kk[k] = kk[k] * j + temp;
				if (kk[k] >= 10) {
					temp = kk[k] / 10;
					kk[k] %= 10;
				}
				else
					temp = 0;
			}
			while (temp != 0) {
				len++;
				kk[len] = temp % 10;
				temp /= 10;
			}
		}
		//统计a的个数
		int sum = 0;
		for (int j = 1; j <= len; j++) {
			if (kk[j] == a)
				sum++;
		}
		cout << sum << endl;
	}

	return 0;
}