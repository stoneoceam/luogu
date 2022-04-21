//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P1055

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main() {
	char k[15];
	cin >> k;

	int len = strlen(k);
	int sum = 0;
	int n = 1;
	for (int i = 0; i < len-1; i++) {
		if (k[i] != '-'){
			sum += (k[i] - '0') * n;
			n++;
		}
	}

	sum %= 11;

	char kk;
	if (sum == 10)
		kk = 'X';
	else
		kk = sum + '0';


	if (kk == k[len - 1]) {
		cout << "Right";
	}
	else {
		k[len - 1] = kk;
		for (int i = 0; i < len; i++) {
			cout << char(k[i]);
		}
	}

	return 0;
}
