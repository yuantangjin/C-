#pragma once
#include<iostream>
#include<string>
#include"Hero.h"
using namespace std;
class Hero;
class Moster
{
public:
	string Name;
	int Hp;
	int Atk;
	int Def;
	void Attack(Hero* hero);
	Moster();
	~Moster();
};

