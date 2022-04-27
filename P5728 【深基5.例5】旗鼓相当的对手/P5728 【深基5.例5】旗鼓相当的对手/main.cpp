//Ô­ÌâÁ´½Ó https://www.luogu.com.cn/problem/P5728

#include<iostream>
#include<cmath>
using namespace std;
typedef struct student {
	int chinese=0;
	int math=0;
	int english=0;
	int sum = 0;
}student;
int main() {
	int n;
	cin >> n;
	student* students = new student[n];
	for (int i = 0; i < n; i++) {
		cin >> students[i].chinese >> students[i].math >> students[i].english;
		students[i].sum = students[i].chinese + students[i].math + students[i].english;
	}

	int nn = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (abs(students[i].chinese - students[j].chinese) <= 5 &&
				abs(students[i].math - students[j].math) <= 5 &&
				abs(students[i].english - students[j].english) <= 5 &&
				abs(students[i].sum - students[j].sum) <= 10) {
				nn++;
			}
		}
	}

	cout << nn;
	return 0;
}