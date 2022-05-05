//原题链接 https://www.luogu.com.cn/problem/P1125

#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
typedef pair<char, int> PAIR;

bool cmp(PAIR& a, PAIR& b) {
	return a.second < b.second;
}

int isPrime(int k) {
	if (k == 0 || k == 1)
		return 0;
	if (k == 2)
		return 1;
	for (int i = 2; i < k; i++) {
		if (k % i == 0)
			return 0;
	}
	return 1;
}

int main() {
	string s;
	cin >> s;
	
	map<char, int>m;
	for (int i = 0; i < s.size(); i++) {
		if (m.find(s[i]) == m.end()) {
			m.insert(PAIR(s[i], 1));
		}
		else
			m[s[i]]++;
	}

	vector<PAIR> v(m.begin(), m.end());//将map转存到vector进行排序
	sort(v.begin(), v.end(),cmp);

	int MAX = v[v.size() - 1].second;
	int MIN = v[0].second;
	int k = MAX - MIN;
	if (isPrime(k)) {
		cout << "Lucky Word" << endl;
		cout << k;
	}
	else {
		cout << "No Answer" << endl;
		cout << 0;
	}
	return 0;
}