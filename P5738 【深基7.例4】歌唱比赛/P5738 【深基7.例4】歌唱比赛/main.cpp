//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P5738

#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	float max = 0;

	for (int i = 0; i < n; i++) {
		int* k = new int[m];
		for (int j = 0; j < m; j++) {
			cin >> k[j];
		}
		sort(k, k + m);
		float sum = 0;
		for (int j = 1; j < m - 1; j++)
			sum += k[j];
		sum /= (m - 2);
		if (sum > max)
			max = sum;
	}

	printf("%.2f", max);

	return 0;
}