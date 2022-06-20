//原题链接 https://www.luogu.com.cn/problem/P2437

#include<iostream>
#include<string>
using namespace std;
string kk[1004];
string big_sum(string a, string b) {
	string Sum = "";
	int len_a = a.size()-1;
	int len_b = b.size()-1;
	int temp = 0;
	while (len_a >= 0 && len_b >= 0) {
		int sum = a[len_a] - '0' + b[len_b] - '0' + temp;
		temp = sum / 10;
		sum = sum % 10;
		Sum.insert(0, 1, sum + '0');
		len_a--;
		len_b--;
	}
	while (len_a >= 0) {
		int sum = a[len_a] - '0' + temp;
		temp = sum / 10;
		sum = sum % 10;
		Sum.insert(0, 1, sum + '0');
		len_a--;
	}
	while (len_b >= 0) {
		int sum = b[len_b] - '0' + temp;
		temp = sum / 10;
		sum = sum % 10;
		Sum.insert(0, 1, sum + '0');
		len_b--;
	}
	while (temp != 0) {
		int sum = temp;
		temp /= 10;
		sum = sum % 10;
		Sum.insert(0, 1, sum + '0');
	}
	return Sum;
}
int main() {
	int m, n;
	cin >> m >> n;
	for (int i = m; i <= n; i++) {
		if (i == m)
			kk[i + 2] = "1";
		else if (i == m + 1)
			kk[i + 2] = "1";
		else
			kk[i + 2] = big_sum(kk[i + 1],kk[i]);//递推公式
		
	}
	cout << kk[n+2];

	return 0;
}
