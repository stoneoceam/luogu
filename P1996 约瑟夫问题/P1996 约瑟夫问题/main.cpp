//原题链接 https://www.luogu.com.cn/problem/P1996

#include<iostream>
using namespace std;
int main() {
	int flag1 = 1;//计数器
	int flag2 = 1;//位置指针
	int n, m, k = 0;
	cin >> n >> m;
	int* v = new int[n + 1];
	for (int i = 1; i <= n; i++) {
		v[i] = 1;
	}

	while (k != n) {
		while (!(flag1==m&&v[flag2]!=0)) {
			if (v[flag2] != 0) {
				flag1++;
			}
			if (++flag2 > n)
				flag2 = 1;
		}
		cout << flag2 << " ";
		v[flag2] = 0;
		flag1 = 1;
		k++;
	}

	return 0;
}