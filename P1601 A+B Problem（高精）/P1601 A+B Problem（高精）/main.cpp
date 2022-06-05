//原题链接 https://www.luogu.com.cn/problem/P1601

#include<iostream>
#include<string>
using namespace std;

string big_sum(string a, string b) {
	string Sum = "";
	int len_a = a.size() - 1;
	int len_b = b.size() - 1;
	
	int temp = 0;
	
	while (len_a>=0 && len_b>=0) {
		int sum = a[len_a] - '0' + b[len_b] - '0' + temp;//同位上的两数之和
		temp = sum / 10;//进位数
		sum = sum % 10;//本位数
		Sum.insert(0, 1, sum + '0');//头插

		len_a--;
		len_b--;
	}

	while (len_a >= 0) {
		int sum = a[len_a] - '0' + temp;
		temp = sum / 10;//进位数
		sum = sum % 10;//本位数
		Sum.insert(0, 1, sum + '0');//头插

		len_a--;
	}

	while (len_b >= 0) {
		int sum = b[len_b] - '0' + temp;
		temp = sum / 10;//进位数
		sum = sum % 10;//本位数
		Sum.insert(0, 1, sum + '0');//头插

		len_b--;
	}


	if (temp != 0) {       //处理多出来的进位数
		int sum = temp % 10;
		Sum.insert(0, 1, sum + '0');//头插
	}

	return Sum;
}

int main() {
	string a, b, sum;
	cin >> a >> b;
	sum = big_sum(a, b);
	cout << sum;
}
