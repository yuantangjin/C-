#include"Hero.h"
#include"BigKnife.h"
#include"Knife.h"
#include"Moster.h"
#include"Weapon.h"
#include<time.h>
#define DEL_OBJ(obj) {if(obj){delete obj;obj=NULL;}}
using namespace std;
int main() {

	srand((unsigned)time(NULL));

	//第一步，创建对象
	Moster* moster = new Moster;
	Hero* hero = new Hero;
	Weapon* knife = new Knife;
	Weapon* bigknife = new BigKnife;

	//用户选择武器

	cout << "请选择武器" << endl;
	cout << "1     无" << endl;
	cout << "2     小刀" << endl;
	cout << "3     大刀" << endl;

	int oper = 0;
	cin >> oper;
	switch (oper)
	{
	case 1:
		cout << "你没有选择武器，空手上场" << endl;
		break;
	case 2:
		cout << "你装备了武器：" << knife->WeaponName << endl;
		hero->EquipWeapon(knife);
		break;
	case 3:
		cout << "你装备了武器：" << bigknife->WeaponName << endl;
		hero->EquipWeapon(bigknife);
		break;
	}
	//第三步，回合制PK
	int round = 1;
	while (true)
	{
		getchar();
		system("cls");//清楚之前的内容
		cout << "---------------第" << round << "回合---------------" << endl;


		hero->Attack(moster);
		if (moster->Hp <= 0) {
			cout << "怪物：" << moster->Name << "死亡了，游戏结束" << endl;
			break;
		}
		moster->Attack(hero);
		if (hero->Hp <= 0) {
			cout << "英雄：" << hero->Name << "死亡了，游戏结束" << endl;
			break;
		}
		cout << "英雄：" << hero->Name << "剩余血量：" << hero->Hp << endl;
		cout << "怪物：" << moster->Name << "剩余血量：" << moster->Hp << endl;
		round++;
	}
	DEL_OBJ(moster);
	DEL_OBJ(hero);
	DEL_OBJ(knife);
	DEL_OBJ(bigknife);
	system("pause");
	return 0;
}