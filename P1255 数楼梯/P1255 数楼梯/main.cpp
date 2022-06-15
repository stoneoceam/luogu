//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P1255

#include<iostream>
using namespace std;

typedef struct step {
	int number;
	string k;
}step;

string big_sum(string a, string b) {
	string Sum = "";
	int len_a = a.size() - 1;
	int len_b = b.size() - 1;

	int temp = 0;
	while (len_a >= 0 && len_b >= 0) {
		int sum = a[len_a] - '0' + b[len_b] - '0' + temp;
		temp = sum / 10;
		sum = sum % 10;
		Sum.insert(0, 1, sum + '0');
		len_a--;
		len_b--;
	}
	while (len_a >= 0) {
		int sum = a[len_a] - '0' + temp;
		temp = sum / 10;
		sum = sum % 10;
		Sum.insert(0, 1, sum + '0');
		len_a--;
	}
	while (len_b >= 0) {
		int sum = b[len_b] - '0' + temp;
		temp = sum / 10;
		sum = sum % 10;
		Sum.insert(0, 1, sum + '0');
		len_b--;
	}
	while (temp>0) {
		int sum = temp;
		temp = sum / 10;
		sum = sum % 10;
		Sum.insert(0, 1, sum + '0');
	}
	return Sum;
}

int main() {
	int N;
	cin >> N;
	step* steps = new step[N + 1];
	if (N == 0)
		cout << '0';
	else if (N == 1)
		cout << '1';
	else if (N == 2)
		cout << '2';
	else {
		steps[1].number = 1;
		steps[1].k = "1";
		steps[2].number = 2;
		steps[2].k = "2";
		for (int i = 3; i <= N; i++) {
			steps[i].number = i;
			steps[i].k = big_sum(steps[i - 1].k, steps[i - 2].k);
		}

		cout << steps[N].k;
	}
	return 0;
}