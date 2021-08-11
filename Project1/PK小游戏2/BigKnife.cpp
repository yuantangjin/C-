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
    //随机1~100小于tate的值，是tate/100的概率
    int num = rand() % 100 + 1;
    if (num <= tate)
        return true;
    return false;
}

BigKnife::BigKnife()
{
    this->BaseDamage = 20;
    this->WeaponName = "大刀";
    this->critRate = 25;
    this->suckRate = 35;
}

BigKnife::~BigKnife()
{
}
