//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P1035

#include<iostream>
using namespace std;
int main() {
	int k;
	cin >> k;
	
	double Sn=0;
	int n = 1;
	while (Sn <= k) {
		Sn += 1.0 / n;
		n++;
	}

	cout << n-1;

	return 0;
}
