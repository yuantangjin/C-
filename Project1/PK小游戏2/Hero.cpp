#include "Hero.h"

void Hero::EquipWeapon(Weapon* weapon)
{
	this->weapon = weapon;
	cout << "Ó¢ÐÛ£º" << this->Name << "×°±¸ÁËÎäÆ÷£º" << this->weapon->WeaponName << endl;
}

void Hero::Attack(Moster* moster)
{
	int damage = 0;//ÉËº¦
	int addHp = 0;//ÎüÑªÁ¿
	bool isCrit = false;//ÊÇ·ñ±©»÷

	if (this->weapon == NULL)
		damage = this->Atk;
	else {
		damage = this->Atk + this->weapon->getBaseDamage();
		addHp = this->weapon->getSuckLood();
		isCrit = this->weapon->getCrit();
	}
	if (isCrit) {
		damage *= 2;
		cout << "Ó¢ÐÛ£º" << this->Name << "´ò³öÁËÒ»¸ö±©»÷" << endl;
	}
	if (addHp > 0) {
		cout << "Ó¢ÐÛ£º" << this->Name << "ÎüÈ¡ÑªÁ¿£º" << addHp << endl;
	}
	int trurDamage = (damage - moster->Def) > 0 ? damage - moster->Def : 1;
	moster->Hp -= trurDamage;
	this->Hp += addHp;
	cout << "Ó¢ÐÛ£º" << this->Name << "¹¥»÷ÁË¹ÖÎï£º" << moster->Name << "´ò³öÁËÉËº¦£º" << trurDamage << endl;
}

Hero::Hero()
{
	this->Atk = 50;
	this->Def = 50;
	this->Hp = 500;
	this->Name = "°¼Í¹Âü";
	
	weapon = NULL;
}

Hero::~Hero()
{

}
