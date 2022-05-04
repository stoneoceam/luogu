//原题链接 https://www.luogu.com.cn/problem/P1205

#include<iostream>
using namespace std;
char original[11][11];
char target[11][11];

int func1(int N , char original[11][11], char target[11][11]) {
	char temp[11][11];
	int i1 = 0;
	int j2 = N - 1;
	while (i1 < N) {
		int j1 = 0;
		int i2 = 0;
		while (j1 < N) {
			temp[i2][j2] = original[i1][j1];
			j1++; 
			i2++;
		}
		i1++;
		j2--;
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (temp[i][j] != target[i][j])
				return 0;
		}
	}
	return 1;
} //90度

int func2(int N, char original[11][11], char target[11][11]) {
	char temp[11][11];
	int i1 = 0;
	int i2 = N - 1;
	while (i1 < N) {
		int j1 = 0;
		int j2 = N-1;
		while (j1 < N) {
			temp[i2][j2] = original[i1][j1];
			j1++;
			j2--;
		}
		i1++;
		i2--;
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (temp[i][j] != target[i][j])
				return 0;
		}
	}
	return 1;
} //180度

int func3(int N, char original[11][11], char target[11][11]) {
	char temp[11][11];
	int i1 = 0;
	int j2 = 0;
	while (i1 < N) {
		int j1 = 0;
		int i2 = N - 1;
		while (j1 < N) {
			temp[i2][j2] = original[i1][j1];
			j1++;
			i2--;
		}
		i1++;
		j2++;
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (temp[i][j] != target[i][j])
				return 0;
		}
	}
	return 1;
} //270度

int func4(int N, char original[11][11], char target[11][11]) {
	char temp[11][11];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			temp[i][N-1-j] = original[i][j];
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (temp[i][j] != target[i][j])
				return 0;
		}
	}
	return 1;
}//反射

int func5(int N, char original[11][11], char target[11][11]) {
	char temp[11][11];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			temp[i][N - 1 - j] = original[i][j];
		}
	}
	if (func1(N, temp, target))
		return 1;
	if (func2(N, temp, target))
		return 1;
	if (func3(N, temp, target))
		return 1;
	return 0;
}//复合

int func6(int N, char original[11][11], char target[11][11]) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (original[i][j] != target[i][j])
				return 0;
		}
	}
	return 1;
}//不改变

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> original[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> target[i][j];
		}
	}
	if (func1(N, original, target))
		cout << 1;
	else if (func2(N, original, target))
		cout << 2;
	else if (func3(N, original, target))
		cout << 3;
	else if (func4(N, original, target))
		cout << 4;
	else if (func5(N, original, target))
		cout << 5;
	else if (func6(N, original, target))
		cout << 6;
	else
		cout << 7;
	return 0;
}