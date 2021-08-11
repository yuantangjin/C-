#pragma once
#include<iostream>
#include<string>
#include"Weapon.h"
#include"Moster.h"
#include"BigKnife.h"
#include"Knife.h"
using namespace std;
class Moster;
class Hero
{
public:
	string Name;
	int Hp;
	int Atk;
	int Def;
	Weapon* weapon;
	void EquipWeapon(Weapon* weapon);//×°±¸ÎäÆ÷
	void Attack(Moster* moster);
	Hero();
	~Hero();
};

