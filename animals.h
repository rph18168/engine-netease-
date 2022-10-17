#ifndef _ANIMALS_H_
#define _ANIMALS_H_
class animals {
	char name[10];
public:
	int speed;
	animals(){}
	animals(char* s,int m);
	virtual void move()=0;
	char* get_name() const;
	int get_speed() const;
};
#endif
#pragma once
