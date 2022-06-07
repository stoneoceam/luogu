//‘≠Ã‚¡¥Ω” https://www.luogu.com.cn/problem/P1328

#include<iostream>
using namespace std;

int kk[5][5] = { {0, 1,-1,-1,1},{ -1,0,1,-1,1},{ 1,-1,0,1,-1},{1,1,-1,0,-1},{-1,-1,1,1,0} };

void compare(int a, int b, int& A_score, int& B_score) {
	int flag = kk[a][b];

	if (flag == -1) {
		A_score += 1;
	}
	else if (flag == 1) {
		B_score += 1;
	}
	else if (flag == 0) {
		A_score += 0;
		B_score += 0;
	}
}

int main() {
	int N, NA, NB;
	cin >> N >> NA >> NB;
	int* A = new int[NA];
	int* B = new int[NB];
	for (int i = 0; i < NA; i++) {
		cin >> A[i];
	}
	for (int j = 0; j < NB; j++) {
		cin >> B[j];
	}

	int A_score = 0;
	int B_score = 0; 
	int i = 0;
	int j = 0;
	for (int k = 0; k < N; k++) {
		if (i >= NA)
			i = 0;
		if (j >= NB)
			j = 0;
		compare(A[i], B[j], A_score, B_score);
		i++;
		j++;
	}
	
	cout << A_score << " " << B_score;
	return 0;
}