//ԭ������ https://www.luogu.com.cn/problem/P1540

#include<iostream>
#include<vector>
using namespace std;
int main() {
	int M, N;
	cin >> M >> N;
	vector<int> v;
	int sum = 0;

	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;

		int find = 0;
		if (v.size() != M) {//�洢�ռ�δ��
			for (int j = 0; j < v.size(); j++) {
				if (v[j] == x) {
					find = 1;
					break;
				}	
			}

			if (!find) {
				sum++;
				v.push_back(x);
			}
		}
		else {//�洢�ռ�����
			for (int j = 0; j < M; j++) {
				if (v[j] == x) {
					find = 1;
					break;
				}
			}

			if (!find) {
				sum++;
				v.erase(v.begin());
				v.push_back(x);
			}
		}

	}

	cout << sum;
	return 0;
}