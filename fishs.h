#ifndef _FISHS_H_
#define _FISHS_H_
#include "animals.h"

class fishs :public animals {
public:
	fishs(){}
	fishs(char* s,int m) :animals(s,m) {}
	void move();
	fishs operator+(const fishs A) const;
};
#endif
#pragma once

#pragma once
