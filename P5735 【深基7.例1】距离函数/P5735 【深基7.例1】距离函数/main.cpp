//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P5735

#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

double cc(double x1, double y1, double x2, double y2) {
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}


int main() {
	double x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	double c = cc(x1, y1, x2, y2) + cc(x1, y1, x3, y3) + cc(x2, y2, x3, y3);
	printf("%.2lf", c);


	return 0;
}