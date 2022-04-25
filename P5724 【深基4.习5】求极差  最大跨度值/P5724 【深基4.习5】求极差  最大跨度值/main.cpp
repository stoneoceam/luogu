//原题链接 https://www.luogu.com.cn/problem/P5724

#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(int a, int b) { return a < b; }//排序方式

int main() {
	int n;
	cin >> n;
	int* k = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> k[i];
	}

	sort(k,k+n,cmp);

	int max = k[n-1];
	int min = k[0];
	
	cout << max - min;
	return 0;
}