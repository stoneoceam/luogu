//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P5712

#include<iostream>
#include<cstdio>
using namespace std;
int main() {
	unsigned int x;
	cin >> x;
	if (x == 0 || x == 1) {
		printf("Today, I ate %d apple.", x);
	}
	else {
		printf("Today, I ate %d apples.", x);
	}
	return 0;
}