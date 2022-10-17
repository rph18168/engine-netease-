#include<iostream>

#include "fishs.h"
using namespace std;

void fishs::move()
{
	cout << get_name() << " can swim!" << endl;
}

fishs fishs::operator+(const fishs A) const
{
	fishs B;
	int i=0,j=0;
	char* a = get_name(), * b = A.get_name(),*c = B.get_name();
	while (a[i])
		c[j++] = a[i++];
	i = 0;
	while (b[i])
		c[j++] = b[i++];
	c[j] = '\0';
	B.speed = A.speed + this->speed;
	return B;
}