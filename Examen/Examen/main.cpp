#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


typedef struct Node {
	Node *next;
	Node *last;
	int value;
}*node;


class Lista{
	
	friend Lista operator+(const Lista&a, const Lista &b);

public:
	node primero;

	Lista();
	void imprimir();

	void insertar(int val) {
		node newNode = new Node;
		newNode->value = val;
		newNode->next = 0;

		if (primero == 0) {
			primero = newNode;
			newNode->last = 0;
			return;
		}
		else {
			node tmp = primero;
			while (tmp->next) tmp = tmp->next;
			tmp->next = newNode;
			newNode->last = tmp;
			return;
		}

	}

};

Lista::Lista() {

	primero = 0;
}

Lista operator+(const Lista &a, const Lista &b) {
	Lista tmpl;
	vector<int> ord;

	node tmp = a.primero;
	node tmp2 = b.primero;

	while (tmp) {
		ord.push_back(tmp->value);
		tmp = tmp->next;

	}

	while (tmp2) {
		ord.push_back(tmp2->value);
		tmp2 = tmp2->next;
	}

	sort(ord.begin(), ord.end());

	for (int i : ord) {
		tmpl.insertar(i);
	}

	return tmpl;
}

void Lista::imprimir() {
	node tmp = primero;

	while (tmp) {
		cout << tmp->value << endl;
		tmp = tmp->next;
	}

}


int main() {
	Lista a, b;

	a.insertar(3);
	a.insertar(5);
	a.insertar(0);

	b.insertar(6);
	b.insertar(4);


	Lista c = a + b;
	c.imprimir();

	system("Pause");
}