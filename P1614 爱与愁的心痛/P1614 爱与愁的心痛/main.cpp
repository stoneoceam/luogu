//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P1614

#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
int main() {
	int n, nn;
	cin >> n >> nn;
	int* k = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> k[i];
	}

	set<int> kk;
	
	for (int i = nn-1; i < n; i++) {
		int sum = 0;
		for (int j = 0; j < nn; j++) {
			sum += k[i - j];
		}
		kk.insert(sum);
	}

	cout << *kk.begin();
	return 0;
}
