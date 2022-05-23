//Ô­ÌâÁ´½Ó https://www.luogu.com.cn/problem/P5740

#include<iostream>
#include<algorithm>
using namespace std;

typedef struct student {
	string name;
	int Chinese;
	int Math;
	int English;
	int Sum;
}student;



int main() {
	int n;
	cin >> n;
	student* students = new student[n];

	int max_Sum = -1, max_n;
	for (int i = 0; i < n; i++) {
		cin >> students[i].name >> students[i].Chinese >> students[i].Math >> students[i].English;
		students[i].Sum = students[i].Chinese + students[i].Math + students[i].English;
		if (max_Sum < students[i].Sum) {
			max_Sum = students[i].Sum;
			max_n = i;
		}

	}
	
	

	cout << students[max_n].name << " " << students[max_n].Chinese << " " << students[max_n].Math << " " << students[max_n].English;

	return 0;
}