#include "Moster.h"

void Moster::Attack(Hero* hero)
{
	int damage = (this->Atk - hero->Def) > 0 ? this->Atk - hero->Def : 1;
	hero->Hp -= damage;

	cout << "怪物：" << this->Name << "攻击了英雄：" << hero->Name << "打出了伤害：" << damage << endl;
}

Moster::Moster()
{
	this->Atk = 70;

	this->Def = 40;
	this->Name = "莫得感情";


	this->Hp = 400;
}

Moster::~Moster()
{
}

