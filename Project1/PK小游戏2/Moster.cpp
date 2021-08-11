#include "Moster.h"

void Moster::Attack(Hero* hero)
{
	int damage = (this->Atk - hero->Def) > 0 ? this->Atk - hero->Def : 1;
	hero->Hp -= damage;

	cout << "���" << this->Name << "������Ӣ�ۣ�" << hero->Name << "������˺���" << damage << endl;
}

Moster::Moster()
{
	this->Atk = 70;

	this->Def = 40;
	this->Name = "Ī�ø���";


	this->Hp = 400;
}

Moster::~Moster()
{
}

