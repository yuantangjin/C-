#include "Knife.h"

int Knife::getBaseDamage()
{
    return this->BaseDamage;
}

int Knife::getSuckLood()
{
    return 0;
}

bool Knife::getCrit()
{
    return false;
}

Knife::Knife()
{
    this->BaseDamage = 5;
    this->WeaponName = "ะกตถ";
}

Knife::~Knife()
{
}
