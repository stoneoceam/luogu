//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P5714

#include<iostream>
#include<cstdio>
using namespace std;
int main() {
	double m, n;
	cin >> m >> n;

	double BMI = m / (n * n);

	if (BMI < 18.5)
		cout << "Underweight";
	else if (BMI < 24 && BMI >= 18.5)
		cout << "Normal";
	else
	{
		cout << BMI << endl;
		cout << "Overweight";

	}
	return 0;
}