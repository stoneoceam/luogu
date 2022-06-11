//ԭ������ https://www.luogu.com.cn/problem/P1786

#include<iostream>
#include<algorithm>
using namespace std;

typedef struct person {
	string Name;//����
	string Position;//ְλ
	int banggong;//�ﹱ
	int Grade;//�ȼ�
	int flag = 0;
	int number;//�ʼ��˳��
}person;

bool cmp1(person a, person b) {
	int flag = 0;
	if (a.banggong > b.banggong)
		flag = 1;
	if (a.banggong == b.banggong)
		if (a.number < b.number)
			flag = 1;
	if (flag)
		return true;
	else
		return false;
}

bool cmp2(person a, person b) {
	int flag = 0;
	if (a.flag < b.flag)
		flag = 1;
	if (a.flag == b.flag) {
		if (a.Grade > b.Grade)
			flag = 1;
	}
	if (a.flag == b.flag)
		if (a.Grade == b.Grade)
			if (a.number < b.number)
				flag = 1;
	if (flag)
		return true;
	else
		return false;
}

int main() {
	int n;
	cin >> n;
	person* persons = new person[n];

	for (int i = 0; i < n; i++) {
		cin >> persons[i].Name >> persons[i].Position >> persons[i].banggong >> persons[i].Grade;
		persons[i].number = i;
		if (persons[i].Name == "absi2011")
			persons[i].flag = 2;
		if(persons[i].Position == "BangZhu")
			persons[i].flag = 1;
		if(persons[i].Position == "FuBangZhu")
			persons[i].flag = 2;
	}

	sort(persons, persons + n, cmp1);//���ﹱ����
	
	int jjj = 0; //����ȷ��ְλ
	for (int i = 0; i < n; i++) {
		if (persons[i].flag == 0) {
			if (jjj < 2) { 
				persons[i].Position = "HuFa"; 
				persons[i].flag = 3; 
			}
				
			else if (jjj < 6) { 
				persons[i].Position = "ZhangLao"; 
				persons[i].flag = 4; 
			}
				
			else if(jjj<13){ 
				persons[i].Position = "TangZhu"; 
				persons[i].flag = 5; 
			}
				
			else if (jjj < 38) { 
				persons[i].Position = "JingYing"; 
				persons[i].flag = 6; 
			}
				
			else { 
				persons[i].Position = "BangZhong"; 
				persons[i].flag = 7; 
			}
			jjj++;
		}
		
	}

	sort(persons, persons + n, cmp2);//����ְλ�ߵ͡��ȼ����������


	for (int i = 0; i < n; i++) {
		cout << persons[i].Name << " " << persons[i].Position << " " << persons[i].Grade << endl;

	}



	return 0;
}
