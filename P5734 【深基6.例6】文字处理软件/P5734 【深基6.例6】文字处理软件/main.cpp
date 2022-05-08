//原题链接 https://www.luogu.com.cn/problem/P5734

#include<iostream>
#include<string>
using namespace std;
int main() {
	int n;
	cin >> n;
	string a;
	cin >> a;
	for (int i = 0; i < n; i++) {
		int opt;
		cin >> opt;
		if (opt == 1) {
			string b;
			cin >> b;
			a = a + b;
			cout << a << endl;
		}
		else if (opt == 2) {
			int n1, n2;
			cin >> n1 >> n2;
			a = a.substr(n1, n2);
			//使用substr()函数，提取出n1到n2位置内的字符串
			cout << a << endl;
		}
		else if (opt == 3) {
			int i;
			cin >> i;
			string b;
			cin >> b;
			a.insert(i, b);
			//使用insert()函数，将b插入到i位置
			cout << a << endl;
		}
		else {
			string b;
			cin >> b;
			cout << (int)a.find(b) << endl; 
			//使用find()函数，返回b在a中第一次出现的位置
		}
	}

	return 0;
}