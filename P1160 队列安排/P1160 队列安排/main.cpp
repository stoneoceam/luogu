//原题链接	https://www.luogu.com.cn/problem/P1160

#include<iostream>
using namespace std;

typedef struct LNode {
	int ID;
	struct LNode* prior = NULL;
	struct LNode* next = NULL;
}LNode,*LinkList;



int main() {
	LNode * L = new LNode[100001];
	L->next = &L[1];
	L->next->ID = 1;
	L[1].prior = L;

	int N;
	cin >> N;
	for (int i = 2; i <= N; i++) {
		int k, p;
		cin >> k >> p;

		/*---add---*/

		LNode* a = L[k].prior;//k的前驱
		LNode* b = &L[k];//k的地址
		LNode* c = L[k].next;//k的后继

		if (p == 0) {//左插入
			L[i].next = b;
			a->next = &L[i];
			L[i].prior = a;
			b->prior = &L[i];
			L[i].ID = i;
		}
		else {//右插入
			L[i].next = c;
			b->next = &L[i];
			L[i].prior = b;
			if(c!=NULL)
				c->prior = &L[i];
			L[i].ID = i;
		}
	}
	
	int M;
	cin >> M;
	for (int i = 0; i < M; i++) {
		int x;
		cin >> x;
		L[x].ID = 0;
	}

	/*----输出------*/
	LNode* i = L->next;

	if (i->ID != 0)
		cout << i->ID;
	i = i->next;

	while (i != NULL) {
		if (i->ID != 0)
			cout << " " << i->ID;
		i = i->next;
	}
	cout << endl;
	return 0;
}
