//原题链接 https://www.luogu.com.cn/problem/P1303

#include<iostream>
using namespace std;


string big_sum(string a, string b) {
	string Sum = "";
	int len_a = a.size() - 1;
	int len_b = b.size() - 1;

	int temp = 0;

	while (len_a >= 0 && len_b >= 0) {
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

string big_mul(string a, string b) {
	string  Mul = "0";
	
	int len_a = a.size() - 1;
	int len_b = b.size() - 1;

	int temp = 0;
	int k = 0;
	for (int i = len_b; i >= 0;i--) {
		string Mul_m = "";
		for (int j = len_a; j >= 0; j--) {
			int mul = (b[i] - '0') * (a[j] - '0') + temp;
			temp = mul / 10;//进位数
			mul = mul % 10;//本位数
			Mul_m.insert(0, 1, mul + '0');			
		}

		while (temp > 0) {
			int mul = temp;
			temp = mul / 10;
			mul = mul % 10;//本位数
			Mul_m.insert(0, 1, mul + '0');
		}

		for (int i = 0; i < k; i++) {//末尾补0，模拟错位
			Mul_m += '0';
		}
		Mul = big_sum(Mul, Mul_m);
		k++;
	}

	while (temp > 0) {
		int mul = temp;
		temp = mul / 10;
		mul = mul % 10;//本位数
		Mul.insert(0, 1, mul + '0');
	}

	return Mul;
}

int main() {
	string a, b, mul;
	cin >> a >> b;
	if (a == "0" || b == "0")
		cout << 0;
	else
		mul = big_mul(a, b);
	cout << mul;
	return 0;
}