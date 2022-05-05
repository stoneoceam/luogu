//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P1957

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main() {
	int n;
	scanf("%d\n", &n);
	char temp;
	for (int i = 0; i < n; i++) {
		char c[21];
		char cc[21];
		fgets(c, sizeof(c), stdin);
		if (c[0] == 'a' || c[0] == 'b' || c[0] == 'c') {
			temp = c[0];
			c[0] = ' ';
		}
		int a, b;
		sscanf(c, "%d %d", &a, &b);
		if (temp == 'a') {
			sprintf(cc, "%d+%d=%d", a, b, a + b);
		}
		else if (temp == 'b')
			sprintf(cc, "%d-%d=%d", a, b, a - b);
		else
			sprintf(cc, "%d*%d=%d", a, b, a * b);
		cout << cc << endl;
		cout << strlen(cc) << endl;
	}
}