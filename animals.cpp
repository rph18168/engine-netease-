#include<iostream>
#include "animals.h"
using namespace std;

animals::animals(char* s,int m):speed(m)
{
	int i = 0;
	do {
		name[i] = s[i];
	} while (s[i++]);
}

char* animals::get_name() const
{
	return (char*)name;
}

int animals::get_speed() const
{
	return speed;
}


