#pragma once
class CManage
{
	CMyMap* m_pMap;
	CBlock* m_pBlock;
	float   m_fSpeed;//游戏速度  时间差
	float   m_fBeginTimer;//起始时间
	float   m_fEndTimer;//终止时间
	int     m_iKey;//用户输入的值
public:
	CManage();
	~CManage();
public:
	void initGame();//初始化游戏
	void updateGame();//更新游戏
	void drawGame();//绘制游戏
private:
	void _initBlock();
	void _getKey();
	void _setMapVal(MyPoint const* tempPoint, int val);
	bool _IsMove(MyPoint const* tempPoint, int rowOff, int colOff);//第①个
	bool _IsWin(MyPoint const* tempPoint);
};

