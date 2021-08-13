#include "stdafx.h"
#include "Manage.h"

CManage::CManage()
{
	initgraph(MAP_COL * IMG_WID, MAP_ROW * IMG_HEI);
	srand((unsigned int)time(NULL));
	m_pMap = NULL;
	m_pBlock = NULL;
	m_fSpeed = 0.0f;
	m_fBeginTimer = m_fEndTimer = 0.0f;
	m_iKey = 0;
}

CManage::~CManage()
{
	closegraph();
	DEL_OBJ(m_pMap);
	DEL_OBJ(m_pBlock);
}

void CManage::initGame()
{
	if (m_pMap==NULL)
	{
		m_pMap = new CMyMap;
	}
	m_pMap->initMap();
	_initBlock();
	//timeGetTime(),是windows函数，可以获取到毫秒级的时间；
	m_fBeginTimer = timeGetTime() / 1000.0f;//开始获取时间
	m_fSpeed = 0.3f;//时间差

}

void CManage::updateGame()
{
	_getKey();
	MyPoint const* tempPoint = m_pBlock->getBlockArr();
	_setMapVal(tempPoint, map_null);
	switch (m_iKey)
	{
	case 'a':
		if(_IsMove(tempPoint,0,-1))
		m_pBlock->setBlockMove();
		break;
	case 'd':
		if(_IsMove(tempPoint,0,1))
		m_pBlock->setBlockMove(false);
		break;
	case 's':
		if (_IsMove(tempPoint,1,0))
			m_pBlock->setBlockDown();
		break;
	case 'j':
		if (m_pBlock->isChange(m_pMap->getMapArr()))
		m_pBlock->changBlock();
		break;
	}
	m_iKey = 0;
	m_fEndTimer = timeGetTime() / 1000.0f;
	if (m_fEndTimer - m_fBeginTimer >= m_fSpeed) 
	{
		if (_IsMove(tempPoint,1,0))
			m_pBlock->setBlockDown();
		else
		{
			_setMapVal(tempPoint, map_block);
			m_pMap->clearNum();
			DEL_OBJ(m_pBlock);
			_initBlock();
			tempPoint = m_pBlock->getBlockArr();
			if (!_IsWin(tempPoint))
			{
				printf("游戏结束\n");
				getchar();
				exit(0);
			}
			//tempPoint = m_pBlock->getBlockArr();
		}
		m_fBeginTimer = m_fEndTimer;
	}
	_setMapVal(tempPoint, map_block);
}

void CManage::drawGame()
{
	cleardevice();
	m_pMap->drawMap();
}

void CManage::_initBlock()
{
	switch (1/*rand()%3*/)
	{
	case 0:
		m_pBlock = new _1;
		break;
	case 1:
		m_pBlock = new _2;
		//其他方块
		break;
	case 2:
		break;
	}
	m_pBlock->initBlock();
}

void CManage::_getKey()
{
	if (_kbhit()) {
		m_iKey = _getch();
	}
}

void CManage::_setMapVal(MyPoint const* tempPoint, int val)
{
	for (int i = 0;i < BLOCK_NUM;i++) {
		m_pMap->setMapVal(tempPoint[i].row, tempPoint[i].col, val);
	}
}

bool CManage::_IsMove(MyPoint const* tempPoint, int rowOff, int colOff)
{
	for (int i = 0;i < BLOCK_NUM;i++) {
		if (m_pMap->getMapVal(tempPoint[i].row+rowOff,tempPoint[i].col+colOff)!=map_null)
		{
			return false;
		}
	}
	return true;
}

bool CManage::_IsWin(MyPoint const* tempPoint)
{
	for (size_t i = 0; i < BLOCK_NUM; i++)
	{
		if (m_pMap->getMapVal(tempPoint[i].row, tempPoint[i].col) != map_null)
		{
			return false;
		}
	}
	return true;
}



