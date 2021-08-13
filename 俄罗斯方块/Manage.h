#pragma once
class CManage
{
	CMyMap* m_pMap;
	CBlock* m_pBlock;
	float   m_fSpeed;//��Ϸ�ٶ�  ʱ���
	float   m_fBeginTimer;//��ʼʱ��
	float   m_fEndTimer;//��ֹʱ��
	int     m_iKey;//�û������ֵ
public:
	CManage();
	~CManage();
public:
	void initGame();//��ʼ����Ϸ
	void updateGame();//������Ϸ
	void drawGame();//������Ϸ
private:
	void _initBlock();
	void _getKey();
	void _setMapVal(MyPoint const* tempPoint, int val);
	bool _IsMove(MyPoint const* tempPoint, int rowOff, int colOff);//�ڢٸ�
	bool _IsWin(MyPoint const* tempPoint);
};

