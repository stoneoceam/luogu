//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P5727

#include<iostream>
#include<stack>
using namespace std;
int main() {
	int n;
	cin >> n;
	
	stack<int> k;
	while (n != 1) {
		k.push(n);
		if (n % 2 == 1) {
			n = n * 3 + 1;	
		}
		else {
			n = n / 2;	
		}
	}
	k.push(1);

	int len = k.size();
	for (int i = len; i > 0; i--) {
		cout << k.top() << " ";
		k.pop();
	}

	return 0;
}
