#pragma once
#include<iostream>
#include<string>
#include"Weapon.h"
using namespace std;
class BigKnife:public Weapon
{
public:
	virtual int getBaseDamage();
	virtual int getSuckLood();
	virtual bool getCrit();

	//吸血率   暴击率
	int suckRate;
	int critRate;

	//传入概率，判断是否触发
	bool isTrigger(int tate);

	BigKnife();
	~BigKnife();
};

