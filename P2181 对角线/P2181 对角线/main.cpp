//ԭ������ https://www.luogu.com.cn/problem/P2181

#include<iostream>
using namespace std;
int main() {
	unsigned long long n,k;
	cin >> n;
	k = n * (n - 1) / 2 * (n - 2) / 3 * (n - 3) / 4;//���㹫ʽ
	cout << k;
	return 0;
}