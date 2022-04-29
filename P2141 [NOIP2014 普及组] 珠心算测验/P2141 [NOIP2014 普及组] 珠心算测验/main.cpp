//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P2141

#include<iostream>
#include<algorithm>
#include<set>

bool cmp(int a, int b) {
	return a < b;
}

using namespace std;
int main() {
	int n;
	cin >> n;
	int* kk = new int[n];
	set<int> q;
	for (int i = 0; i < n; i++) {
		cin >> kk[i];
	}

	sort(kk, kk + n, cmp);
	for (int i = 0; i < n-2; i++) {
		for (int j = i+1; j < n-1; j++) {
			for (int k = j+1; k < n; k++) {
				if (kk[i] + kk[j] == kk[k])
					q.insert(k);
			}
		}
	}

	cout << q.size();
	return 0;
}