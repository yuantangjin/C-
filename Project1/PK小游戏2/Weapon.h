#pragma once
#include<iostream>
#include<string>
using namespace std;
class Weapon
{
public:
	int BaseDamage;//���������˺�
	string WeaponName;//����������

	virtual int getBaseDamage() = 0;//������ȡ�����˺�
	virtual int getSuckLood() = 0;//��Ѫ
	virtual bool getCrit() = 0;//����
};

