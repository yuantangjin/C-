#include "Hero.h"

void Hero::EquipWeapon(Weapon* weapon)
{
	this->weapon = weapon;
	cout << "Ӣ�ۣ�" << this->Name << "װ����������" << this->weapon->WeaponName << endl;
}

void Hero::Attack(Moster* moster)
{
	int damage = 0;//�˺�
	int addHp = 0;//��Ѫ��
	bool isCrit = false;//�Ƿ񱩻�

	if (this->weapon == NULL)
		damage = this->Atk;
	else {
		damage = this->Atk + this->weapon->getBaseDamage();
		addHp = this->weapon->getSuckLood();
		isCrit = this->weapon->getCrit();
	}
	if (isCrit) {
		damage *= 2;
		cout << "Ӣ�ۣ�" << this->Name << "�����һ������" << endl;
	}
	if (addHp > 0) {
		cout << "Ӣ�ۣ�" << this->Name << "��ȡѪ����" << addHp << endl;
	}
	int trurDamage = (damage - moster->Def) > 0 ? damage - moster->Def : 1;
	moster->Hp -= trurDamage;
	this->Hp += addHp;
	cout << "Ӣ�ۣ�" << this->Name << "�����˹��" << moster->Name << "������˺���" << trurDamage << endl;
}

Hero::Hero()
{
	this->Atk = 50;
	this->Def = 50;
	this->Hp = 500;
	this->Name = "��͹��";
	
	weapon = NULL;
}

Hero::~Hero()
{

}
