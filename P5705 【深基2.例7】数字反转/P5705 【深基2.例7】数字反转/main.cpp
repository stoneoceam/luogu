//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P5705

#include<iostream>
#include<cstring>
using namespace std;
int main() {
	char s[100];
	cin >> s;
	for (int i = strlen(s) - 1; i >= 0; i--) {
		cout << s[i];
	}
	return 0;
}