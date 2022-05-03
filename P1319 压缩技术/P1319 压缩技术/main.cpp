//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P1319

#include<iostream>
using namespace std;
int main() {
	int N;
	cin >> N;

	int i = 0;
	int flag = 0;
	while (i < N * N) {
		int e;
		cin >> e;
		for (int k = 1; k <= e; k++) {	
			cout << flag;
			i++;
			if (i % N == 0)
				cout << endl;
		}
		flag = !flag;
	}

	return 0;
}