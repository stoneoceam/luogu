//原题链接 https://www.luogu.com.cn/problem/P2415

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main() {
	vector<int> v;
	int n;
	long long sum = 0;
	while (cin >> n) {
		v.push_back(n);
		
		if (cin.get() == '\n') // 回车结束
			break;
		
	}
	
	for (int i = 0; i < v.size(); i++) {
		sum += v[i];
	}

	sum *= pow(2, v.size() - 1);
	
	cout << sum;
	return 0;
}