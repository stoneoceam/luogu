//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P5717

#include<iostream>
using namespace std;

void swap(unsigned long long* k) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3 - 1 - i; j++) {
			if (k[j] > k[j + 1]) {
				unsigned long long temp;
				temp = k[j];
				k[j] = k[j + 1];
				k[j + 1] = temp;
			}
		}
	}
}

int Is_triangle(unsigned long long* k) {
	if ((k[0] + k[1]) > k[2]) {
		return 1;
	}
	else
		return 0;
}

int Right_triangle(unsigned long long* k) {
	unsigned long long a = k[0] * k[0];
	unsigned long long b = k[1] * k[1];
	unsigned long long c = k[2] * k[2];
	if (a+b==c) {
		return 1;
	}
	else
		return 0;
}

int Acute_triangle(unsigned long long* k) {
	unsigned long long a = k[0] * k[0];
	unsigned long long b = k[1] * k[1];
	unsigned long long c = k[2] * k[2];
	if (a + b > c)
		return 1;
	else
		return 0;
}

int Obtuse_triangle(unsigned long long* k) {
	unsigned long long a = k[0] * k[0];
	unsigned long long b = k[1] * k[1];
	unsigned long long c = k[2] * k[2];
	if (a + b < c)
		return 1;
	else
		return 0;
}
int Isosceles_triangle(unsigned long long* k) {
	if (k[0] == k[1] || k[1] == k[2] || k[0] == k[2]) {
		return 1;
	}
	else
		return 0;
}
int Equilateral_triangle(unsigned long long* k) {
	if (k[0] == k[1] && k[1] == k[2])
		return 1;
	else
		return 0;
}

int main() {
	unsigned long long k[3];
	cin >> k[0] >> k[1] >> k[2];

	swap(k);

	if (Is_triangle(k)) {
		if (Right_triangle(k))
			cout << "Right triangle" << endl;
		if (Acute_triangle(k))
			cout << "Acute triangle" << endl;
		if (Obtuse_triangle(k))
			cout << "Obtuse triangle" << endl;
		if (Isosceles_triangle(k))
			cout << "Isosceles triangle" << endl;
		if (Equilateral_triangle(k))
			cout << "Equilateral triangle" << endl;
	}
	else {
		cout << "Not triangle";
	}

	return 0;
}