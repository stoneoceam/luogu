//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P1009

#include<iostream>
using namespace std;

string big_Sum(string a, string b) {
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

	while (temp > 0) {
		int sum = temp;
		temp = sum / 10;
		sum = sum % 10;

		Sum.insert(0, 1, sum + '0');
	}

	return Sum;
}

string big_Mul(string a, string b) {
	string Mul = "0";
	int len_a = a.size() - 1;
	int len_b = b.size() - 1;

	int temp = 0;
	int mul;
	
	int k = 0;
	for (int i = len_a; i >= 0; i--) {
		string Mul_temp = "";
		for (int j = len_b; j >= 0; j--) {
			mul = (a[i] - '0') * (b[j] - '0') + temp;
			temp = mul / 10;
			mul = mul % 10;

			Mul_temp.insert(0, 1, mul + '0');
			
		}

		while (temp > 0) {
			mul = temp;
			temp = mul / 10;
			mul = mul % 10;

			Mul_temp.insert(0, 1, mul + '0');
		}

		for (int kk = 0; kk < k; kk++) {
			Mul_temp += '0';
		}

		Mul = big_Sum(Mul_temp, Mul);
		k++;
	}

	return Mul;
}

string creat(int n) {
	string nn = "";
	while (n) {
		nn.insert(0, 1, (n % 10 + '0'));
		n /= 10;
	}
	return nn;
}


int main() {
	int n;
	cin >> n;
	string sum = "0";
	string temp;
	for (int i = 1; i <= n; i++) {
		if (i == 1)
			temp = "1";
		
		string c = creat(i);

		temp = big_Mul(temp, c);
		sum = big_Sum(sum, temp);
	}

	cout << sum;

	return 0;
}
