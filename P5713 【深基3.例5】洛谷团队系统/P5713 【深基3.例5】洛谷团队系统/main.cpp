// ‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P5713

#include<iostream>
using namespace std;
int main() {
	int Local = 0;
	int Luogu = 11;
	
	unsigned int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		Local += 5;
		Luogu += 3;
	}
	if (Local < Luogu)
		cout << "Local";
	else
		cout << "Luogu";
	
	return 0;
}
