//ԭ������ https://www.luogu.com.cn/problem/P5734

#include<iostream>
#include<string>
using namespace std;
int main() {
	int n;
	cin >> n;
	string a;
	cin >> a;
	for (int i = 0; i < n; i++) {
		int opt;
		cin >> opt;
		if (opt == 1) {
			string b;
			cin >> b;
			a = a + b;
			cout << a << endl;
		}
		else if (opt == 2) {
			int n1, n2;
			cin >> n1 >> n2;
			a = a.substr(n1, n2);
			//ʹ��substr()��������ȡ��n1��n2λ���ڵ��ַ���
			cout << a << endl;
		}
		else if (opt == 3) {
			int i;
			cin >> i;
			string b;
			cin >> b;
			a.insert(i, b);
			//ʹ��insert()��������b���뵽iλ��
			cout << a << endl;
		}
		else {
			string b;
			cin >> b;
			cout << (int)a.find(b) << endl; 
			//ʹ��find()����������b��a�е�һ�γ��ֵ�λ��
		}
	}

	return 0;
}