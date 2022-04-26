//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P1427

#include<iostream>
using namespace std;
int main() {
	long long k[101] = { 0 };
	int i = 0;
	int flag = 1;
	while (flag) {
		cin >> k[i];
		if (k[i] == 0)
			flag = 0;
		i++;
	}
	i = i - 2;
	for (int j = i; j >= 0; j--) {
		cout << k[j] << " ";
	}
	return 0;
}