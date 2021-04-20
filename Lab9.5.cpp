/*
	Автор: Максим Колесник
	Группа: СБС-001-О-01
	Задание№: 9: 5)
	Цель: Написать программу для создания триарного дерева объектов.
*/

#include <iostream>
using namespace std;
class TriarnTree {
public:
	static int Count;
	int m;
	TriarnTree *p1;
	TriarnTree *p2;
	TriarnTree *p3;
	TriarnTree(int n) {
		if (n == 1) {
			p1 = NULL;
			p2 = NULL;
			p3 = NULL;
		}
		else {
			p1 = new TriarnTree(n - 1);
			p2 = new TriarnTree(n - 1);
			p3 = new TriarnTree(n - 1);
		}
		m = ++Count;
		cout << "Object created: " << this << " : " << m;
		cout << " -> Number of objects: " << Count << endl;
	}
	TriarnTree() {
		delete p1;
		delete p2;
		delete p3;
		Count--;
		cout << "Object deleted: " << this << " : " << m;
		cout << " -> Number of objects: " << Count << endl;
	}
};
int TriarnTree::Count;
int main() {
	TriarnTree::Count = 0;
	TriarnTree obj1(4);
	TriarnTree *p;
	p = new TriarnTree(3);
	delete p;
	return 0;
}
