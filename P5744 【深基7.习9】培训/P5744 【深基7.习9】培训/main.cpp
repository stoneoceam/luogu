//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P5744

#include<iostream>
#include<string>
using namespace std;

typedef struct student {
	string name;
	int age;
	int score;
}student;


int main() {
	int n;
	cin >> n;
	student * students = new student[n];
	for (int i = 0; i < n; i++) {
		cin >> students[i].name >> students[i].age >> students[i].score;
		students[i].age += 1;
		students[i].score *= 1.2;
		if (students[i].score > 600)
			students[i].score = 600;
	}

	for (int i = 0; i < n; i++) {
		cout << students[i].name << " " << students[i].age << " " << students[i].score << endl;
	}

	return 0;
}
