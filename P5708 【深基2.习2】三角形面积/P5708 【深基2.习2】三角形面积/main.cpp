//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P5708

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	double p;
	p = (1 / 2.0) * (a + b + c);
	double s;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("%.1lf", s);
	return 0;
}