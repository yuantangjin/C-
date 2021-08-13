#pragma once
class CMyMap
{
	IMAGE image[2];
	char m_mapArr[MAP_ROW][MAP_COL];
public:
	CMyMap();
	~CMyMap();
public:
	void initMap();//初始化地图
	void drawMap();
	void setMapVal(int row, int col, int val);
	int getMapVal(int row, int col)const { return m_mapArr[row][col]; }//第②个
	int clearNum();//消行
	PARR getMapArr() { return m_mapArr; }
private:
	void _zeroMap();
	
};

