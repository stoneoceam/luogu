//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P5719

#include<iostream>
#include<cstdio>
using namespace std;

double average(int sum,int n) {
	double k;
	k = sum * 1.0 / n;
	return k;
}

int main() {
	int n, k;
	cin >> n >> k;

	int n1 = 0, sum1 = 0, n2 = 0, sum2 = 0;
	for (int i = 1; i <= n; i++) {
		if (i % k == 0) {
			sum1 += i;
			n1++;
		}
		else {
			sum2 += i;
			n2++;
		}
	}

	printf("%.1lf %.1lf", average(sum1, n1), average(sum2, n2));

	return 0;
}