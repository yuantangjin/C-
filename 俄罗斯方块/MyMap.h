#pragma once
class CMyMap
{
	IMAGE image[2];
	char m_mapArr[MAP_ROW][MAP_COL];
public:
	CMyMap();
	~CMyMap();
public:
	void initMap();//��ʼ����ͼ
	void drawMap();
	void setMapVal(int row, int col, int val);
	int getMapVal(int row, int col)const { return m_mapArr[row][col]; }//�ڢڸ�
	int clearNum();//����
	PARR getMapArr() { return m_mapArr; }
private:
	void _zeroMap();
	
};

