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

	//��һ������������
	Moster* moster = new Moster;
	Hero* hero = new Hero;
	Weapon* knife = new Knife;
	Weapon* bigknife = new BigKnife;

	//�û�ѡ������

	cout << "��ѡ������" << endl;
	cout << "1     ��" << endl;
	cout << "2     С��" << endl;
	cout << "3     ��" << endl;

	int oper = 0;
	cin >> oper;
	switch (oper)
	{
	case 1:
		cout << "��û��ѡ�������������ϳ�" << endl;
		break;
	case 2:
		cout << "��װ����������" << knife->WeaponName << endl;
		hero->EquipWeapon(knife);
		break;
	case 3:
		cout << "��װ����������" << bigknife->WeaponName << endl;
		hero->EquipWeapon(bigknife);
		break;
	}
	//���������غ���PK
	int round = 1;
	while (true)
	{
		getchar();
		system("cls");//���֮ǰ������
		cout << "---------------��" << round << "�غ�---------------" << endl;


		hero->Attack(moster);
		if (moster->Hp <= 0) {
			cout << "���" << moster->Name << "�����ˣ���Ϸ����" << endl;
			break;
		}
		moster->Attack(hero);
		if (hero->Hp <= 0) {
			cout << "Ӣ�ۣ�" << hero->Name << "�����ˣ���Ϸ����" << endl;
			break;
		}
		cout << "Ӣ�ۣ�" << hero->Name << "ʣ��Ѫ����" << hero->Hp << endl;
		cout << "���" << moster->Name << "ʣ��Ѫ����" << moster->Hp << endl;
		round++;
	}
	DEL_OBJ(moster);
	DEL_OBJ(hero);
	DEL_OBJ(knife);
	DEL_OBJ(bigknife);
	system("pause");
	return 0;
}