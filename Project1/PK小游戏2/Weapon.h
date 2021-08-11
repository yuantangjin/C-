#pragma once
#include<iostream>
#include<string>
using namespace std;
class Weapon
{
public:
	int BaseDamage;//武器基础伤害
	string WeaponName;//武器的名字

	virtual int getBaseDamage() = 0;//用来获取基础伤害
	virtual int getSuckLood() = 0;//吸血
	virtual bool getCrit() = 0;//暴击
};

