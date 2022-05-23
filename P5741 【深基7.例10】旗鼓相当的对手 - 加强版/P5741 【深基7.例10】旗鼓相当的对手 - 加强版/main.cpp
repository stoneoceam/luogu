//Ô­ÌâÁ´½Ó https://www.luogu.com.cn/problem/P5741

#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;

typedef struct student {
	string  Name;
	int Chinese;
	int Math;
	int English;
	int Sum;
}student;

int cmp(student a, student b) {
	return a.Name < b.Name;
}

int main() {
	int n;
	cin >> n;
	student* students = new student[n];
	for (int i = 0; i < n; i++) {
		cin >> students[i].Name >> students[i].Chinese >> students[i].Math >> students[i].English;
		students[i].Sum = students[i].Chinese + students[i].Math + students[i].English;
	}

	sort(students, students + n, cmp);

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (abs(students[i].Chinese - students[j].Chinese) <= 5 && abs(students[i].Math - students[j].Math) <= 5 && abs(students[i].English - students[j].English) <= 5 && abs(students[i].Sum - students[j].Sum) <= 10) {
				cout << students[i].Name << " " << students[j].Name << endl;
			}
		}
	}

	return 0;
}

