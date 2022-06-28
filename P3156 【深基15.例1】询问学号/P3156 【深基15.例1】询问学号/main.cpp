//原题连接 https://www.luogu.com.cn/problem/P3156

#include<iostream>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	int* kk = new int[n+1];
	for (int i = 1; i <= n; i++) {
		cin >> kk[i];
	}
	for (int i = 1; i <= m; i++) {
		int k;
		cin >> k;
		cout << kk[k] << endl;
	}
	return 0;
}