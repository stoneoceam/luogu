//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P1422

#include<iostream>
#include<cstdio>
using namespace std;
int main() {
	double sum,k1 = 0.4463, k2 = 0.4663, k3 = 0.5663;
	long n;
	cin >> n;
	
	long b1 = 0, b2 = 0, b3 = 0;
	
	if (n > 400) {
		b3 = n - 400;
		b2 = 400 - 150;
		b1 = 150;
	}
	else if (n > 150 && n <= 400) {
		b3 = 0;
		b2 = n - 150;
		b1 = 150;
	}
	else {
		b3 = 0; 
		b2 = 0;
		b1 = n;
	}

	sum = k1 * b1 + b2 * k2 + b3 * k3;
	printf("%.1lf", sum);

	return 0;
}