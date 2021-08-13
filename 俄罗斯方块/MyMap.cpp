#include "stdafx.h"
#include "MyMap.h"

CMyMap::CMyMap() {
	loadimage(&image[0], "1.jpg", IMG_WID, IMG_HEI);
	loadimage(&image[1], "2.jpg", IMG_WID, IMG_HEI);
	_zeroMap();
}

CMyMap::~CMyMap() {

}

void CMyMap::initMap()
{
	//清空地图
	_zeroMap();
    //最上面和最下面一行
	for (int i = 0;i < MAP_ROW;i += MAP_ROW - 1) {
		for (size_t j = 0; j < MAP_COL; j++)
		{
			m_mapArr[i][j] = map_franme;
		}
	}
	//最左面和最右面一列
	for (int i = 0;i < MAP_COL;i += MAP_COL - 1) {
		for (int j = 1;j < MAP_ROW - 1;j++) {
			m_mapArr[j][i] = map_franme;
		}
	}
	//for (int i = 0;i < MAP_ROW;i++) {
	//	for (size_t j = 0; j < MAP_COL; j++)
	//	{
	//		if (i == 0 || i == MAP_ROW - 1 || j == 0 || j = MAP_COL - 1)
	//			m_mapArr[i][j] = map_franme;
	//		else
	//			m_mapArr[i][j] = map_null;
	//	}
	//}
}

void CMyMap::drawMap()
{
	BeginBatchDraw();
	for (int i = 0;i < MAP_ROW;i++) {
		for (int j = 0;j < MAP_COL;j++) {
			switch (m_mapArr[i][j])
			{
			case map_franme:
				//printf("* ");
				putimage(j * IMG_WID, i * IMG_HEI, &image[0]);
				break;
			case map_null:
				//printf("  ");
				break;
			case map_block:
				//printf("# ");
				putimage(j * IMG_WID, i * IMG_HEI, &image[1]);
				break;
			}
		}
		printf("\n");
	}
	EndBatchDraw();
}

void CMyMap::_zeroMap()
{
	memset(m_mapArr, 0, sizeof(char) * MAP_ROW * MAP_COL);
}

void CMyMap::setMapVal(int row, int col, int val)
{
	m_mapArr[row][col] = val;
}

int CMyMap::clearNum()
{
	int num = 0;//用于计分
	for (size_t i = MAP_ROW-2; i >= 4; i--)
	{
		bool isClear = true;
		for (size_t j = 1; j < MAP_COL-1; j++)
		{
			if (m_mapArr[i][j] == map_null)
			{
				isClear = false;
				break;
			}
		}
		if (isClear)
		{
			num++;
			for (size_t m = i; m >= 4; m--)
			{
				for (int n = 1;n < MAP_COL - 1;n++) {
					m_mapArr[m][n] = m_mapArr[m - 1][n];
				}
				
			}
			i++;
		}

	}
	return 0;
}
