#include <iostream>
#include <vector>
#include <memory>
using namespace std;
#include "fishs.h"
#include "birds.h"

int inline max(int m, int n)
{
	return (m > n) ? m : n;
}
int main()
{
	char name_1[20], name_2[20], name_3[20];
	int speed_1, speed_2, speed_3;
	cin >> name_1 >> speed_1;
	cin >> name_2 >> speed_2;
	cin >> name_3 >> speed_3;
	fishs goldfish_1(name_1,speed_1),goldfish_2(name_3,speed_3);
	birds eagle(name_2,speed_2);
	animals* p1 = &goldfish_1, *p2 = &eagle;
	p1->move();
	p2->move();
	cout << max(p1->get_speed(), p2->get_speed()) << endl;

	//vector模板使用
	vector<int> A;
	int i;
	for (i = 0; i < 10; i++)
		A.push_back(i);
	for (i = 0; i < 10; i++)
		cout << A[i]<<' ';
	cout << endl;

	//智能指针使用
	shared_ptr<int> p(new int[10]);
	int* q = p.get();
	for (i = 0; i < 10; i++)
		q[i] = i;
	for (i = 0; i < 10; i++)
		cout << q[i] << ' ';
	cout << endl;

	//运算符重载
	fishs goldfish_3 = goldfish_1 + goldfish_2;
	goldfish_3.move();
	return 0;
}