#include"stdafx.h"
int main() {

	//CMyMap my;
	//my.initMap();
	//my.drawMap();
	CManage c;
	c.initGame();
	while (true)
	{
		c.updateGame();
		c.drawGame();
		system("cls");
	}

	getchar();
	return 0;
}