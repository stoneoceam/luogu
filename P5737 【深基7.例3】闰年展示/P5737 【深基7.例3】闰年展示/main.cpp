//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P5737

#include<iostream>
#include<vector>

bool leap_year(int year) {
	if (year % 100 == 0){
		if (year % 400 == 0)
			return true;
		else
			return false;
	}
	else {
		if (year % 4 == 0)
			return true;
		else
			return false;
	}
}

using namespace std;
int main() {
	int x, y;
	cin >> x >> y;
	vector<int> years;

	int n = 0;
	for (int i = x; i <= y; i++) {
		if (leap_year(i)) {
			years.push_back(i);
			n++;
		}
	}

	cout << n << endl;
	for (int i = 0; i < years.size(); i++) {
		cout << years[i] <<" ";
	}

	return 0;
}