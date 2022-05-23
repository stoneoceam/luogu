//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P5742

#include<iostream>
using namespace std;

typedef struct student {
	int ID;
	int academic_performance;
	int Quality_Extended_Score;
	double Score;
}student;


int main() {
	int n;
	cin >> n;
	student* students = new student[n];
	for (int i = 0; i < n; i++) {
		cin >> students[i].ID >> students[i].academic_performance >> students[i].Quality_Extended_Score;
		students[i].Score = students[i].academic_performance * 0.7 + students[i].Quality_Extended_Score * 0.3;
	}

	for (int i = 0; i < n; i++) {
		if ((students[i].academic_performance + students[i].Quality_Extended_Score) > 140 && students[i].Score >= 80) {
			cout << "Excellent" << endl;
		}
		else {
			cout << "Not excellent" << endl;
		}
	}

	return 0;
}