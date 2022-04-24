//原题链接 https://www.luogu.com.cn/problem/P1307

#include<iostream>
#include<cstring>
using namespace std;
int main() {
	char k1[12];
	char k2[12];
	cin >> k1;
	
	if (k1[0] == '0')//输入为0时直接输出0
		cout << "0";
	else {
		int len = strlen(k1);
		int i = 0;
		if (k1[i] == '-') {   //负号处理
			k2[i] = k1[i];
			i++;
			cout << '-';
		}

		int j = i;   //把k1倒着存入k2
		if (k2[0] == '-') {
			for (i; i < len; i++) {
				k2[len - i] = k1[i];
			}
		}
		else {
			for (i; i < len; i++) {
				k2[len - i - 1] = k1[i];
			}
		}

		int flag = 1; //打印k2
		for (j; j < len; j++) {
			if (k2[j] != '0') {
				flag = 0;
			}
			if (k2[j] == '0' && flag)
				cout << "";
			else
				cout << k2[j];
		}
	}
	return 0;
}