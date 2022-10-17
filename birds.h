#ifndef _BIRDS_H_
#define _BIRDS_H_
#include "animals.h"

class birds :public animals {
public:
	birds(char* s,int m) :animals(s,m) {}
	void move();
}; 
#endif
#pragma once
