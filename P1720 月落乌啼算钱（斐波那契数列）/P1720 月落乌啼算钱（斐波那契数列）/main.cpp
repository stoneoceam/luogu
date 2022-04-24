//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P1720

#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main() {
	int n;
	cin >> n;
	double Fn = (pow(((1 + sqrt(5)) / 2), n) - pow(((1 - sqrt(5)) / 2), n)) / sqrt(5);
	printf("%.2lf", Fn);

	return 0;
}