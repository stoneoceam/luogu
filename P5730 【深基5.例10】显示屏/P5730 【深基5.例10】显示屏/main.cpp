//原题链接 https://www.luogu.com.cn/problem/P5730

#include<iostream>
using namespace std;

char numbers[10][5][3] =//W[i][j][k]表示第i个数字的第j行的第k列，（手打累死了）
{
	{//0
		'X','X','X',
		'X','.','X',
		'X','.','X',
		'X','.','X',
		'X','X','X',
	},
	{//1
		'.','.','X',
		'.','.','X',
		'.','.','X',
		'.','.','X',
		'.','.','X',
	},
	{//2
		'X','X','X',
		'.','.','X',
		'X','X','X',
		'X','.','.',
		'X','X','X',
	},
	{//3
		'X','X','X',
		'.','.','X',
		'X','X','X',
		'.','.','X',
		'X','X','X',
	},
	{//4
		'X','.','X',
		'X','.','X',
		'X','X','X',
		'.','.','X',
		'.','.','X',
	},
	{//5
		'X','X','X',
		'X','.','.',
		'X','X','X',
		'.','.','X',
		'X','X','X',
	},
	{//6
		'X','X','X',
		'X','.','.',
		'X','X','X',
		'X','.','X',
		'X','X','X',
	},
	{//7
		'X','X','X',
		'.','.','X',
		'.','.','X',
		'.','.','X',
		'.','.','X',
	},
	{//8
		'X','X','X',
		'X','.','X',
		'X','X','X',
		'X','.','X',
		'X','X','X',
	},
	{//9
		'X','X','X',
		'X','.','X',
		'X','X','X',
		'.','.','X',
		'X','X','X',
	}
};
void func(int number,int L) {
	for (int i = 0; i < 10; i++) {
		if (number == i) {
			for (int i = 0; i < 3; i++) {
				cout << numbers[number][L][i];
			}
		}
	}
}


int main() {
	int n;
	cin >> n;
	char* kk = new char[n];
	for (int i = 0; i < n; i++) {
		cin >> kk[i];
	}

	for (int j = 0; j < 5; j++){
		for (int i = 0; i < n; i++) {
			if (i != 0) { cout << '.'; }
			func(kk[i]-'0', j);
		}
		cout << endl;
	}
	
	return 0;
}