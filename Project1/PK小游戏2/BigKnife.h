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

	//��Ѫ��   ������
	int suckRate;
	int critRate;

	//������ʣ��ж��Ƿ񴥷�
	bool isTrigger(int tate);

	BigKnife();
	~BigKnife();
};

