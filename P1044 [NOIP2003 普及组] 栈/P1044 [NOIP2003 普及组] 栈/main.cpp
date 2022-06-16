//原题链接 https://www.luogu.com.cn/problem/P1044

#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int kk[20] = {0};
	kk[0] = 1;
	kk[1] = 1;
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j < i; j++) {
			kk[i] += kk[j] * kk[i - j - 1]; // 卡特兰（Catalan） 递推式 f[n] = f[0]*f[n-1]+f[1]*f[n-2]+……+f[n-1]*f[0] (n>=2)
		}
	}

	cout << kk[n];

	return 0;
}