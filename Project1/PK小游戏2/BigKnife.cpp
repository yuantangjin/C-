#include "BigKnife.h"

int BigKnife::getBaseDamage()
{
    return this->BaseDamage;
}

int BigKnife::getSuckLood()
{
    if (isTrigger(suckRate))
        return this->BaseDamage * 2;
    return 0;
}

bool BigKnife::getCrit()
{
    if (isTrigger(critRate))
        return true;
    return false;
}

bool BigKnife::isTrigger(int tate)
{
    //���1~100С��tate��ֵ����tate/100�ĸ���
    int num = rand() % 100 + 1;
    if (num <= tate)
        return true;
    return false;
}

BigKnife::BigKnife()
{
    this->BaseDamage = 20;
    this->WeaponName = "��";
    this->critRate = 25;
    this->suckRate = 35;
}

BigKnife::~BigKnife()
{
}
