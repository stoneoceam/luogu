//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P5720

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	double a;
	cin >> a;
	
	int i = 1;
	while (a != 1) {
		a = floor(a / 2);
		i++;
	}

	cout << i;

	return 0;
}