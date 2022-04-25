//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P5726

#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

bool cmp(int a, int b) { 
	return a < b; 
}
int main() {
	int n;
	cin >> n;
	int* k = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> k[i];
	}

	sort(k, k + n, cmp);
	double average = 0;
	for (int i = 1; i < n - 1; i++) {
		average += k[i];
	}

	printf("%.2lf", average / (n - 2));
	return 0;
}


