#pragma once
#include<iostream>
#include<string>
#include"Weapon.h"
using namespace std;

class Knife:public Weapon
{
public:
	virtual int getBaseDamage();
	virtual int getSuckLood();
	virtual bool getCrit();
	Knife();
	~Knife();
};

