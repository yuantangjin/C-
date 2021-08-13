#include "Block.h"

CBlock::CBlock()
{
}

CBlock::~CBlock()
{
}

void CBlock::initBlock()
{
}

void CBlock::changBlock()
{
}

bool CBlock::isChange(PARR p)
{
	return true;
}

void CBlock::setBlockDown()
{
	for (int i = 0; i < BLOCK_NUM; i++)
	{
		m_blockArr[i].row++;
	}
}

void CBlock::setBlockMove(bool left)
{
	if (left)
	{
		for (int i = 0;i < BLOCK_NUM;i++)
			m_blockArr[i].col--;
	}
	else
	{
		for (size_t i = 0; i < BLOCK_NUM; i++)
		{
			m_blockArr[i].col++;
		}
	}
}

void _1::initBlock()
{
	m_blockType = rand() % 2;
	switch (m_blockType)
	{
	case 0:
	    {
			int start_col = 4;
			int start_row = 3;
			for (int i = 0; i < BLOCK_NUM; i++)
			{
				m_blockArr[i].row = start_row;
				m_blockArr[i].col = start_col;
				start_col++;
			}
			break;
	    }
	case 1: 
		{
			int start_col = 5;
			int start_row = 1;
			for (int i = 0; i < BLOCK_NUM; i++)
			{
				m_blockArr[i].row = start_row;
				m_blockArr[i].col = start_col;
				start_row++;
			}
			break;
		}
	}
}

void _1::changBlock()
{
	switch (m_blockType)
	{
	case 0:
		m_blockArr[0].row = m_blockArr[1].row + 1;
		m_blockArr[0].col = m_blockArr[1].col;
		m_blockArr[2].row = m_blockArr[1].row - 1;
		m_blockArr[2].col = m_blockArr[1].col;
		m_blockArr[3].row = m_blockArr[1].row - 2;
		m_blockArr[3].col = m_blockArr[1].col;
		m_blockType = 1;
		break;
	case 1:
		m_blockArr[0].row = m_blockArr[1].row;
		m_blockArr[0].col = m_blockArr[1].col - 1;
		m_blockArr[2].row = m_blockArr[1].row;
		m_blockArr[2].col = m_blockArr[1].col + 1;
		m_blockArr[3].row = m_blockArr[1].row;
		m_blockArr[3].col = m_blockArr[1].col + 2;
		m_blockType = 0;
		break;
	}
}

bool _1::isChange(PARR p)
{
	switch (m_blockType)
	{
		case 0:
			if (p[m_blockArr[0].row + 1][m_blockArr[0].col] != map_null ||
				p[m_blockArr[1].row + 1][m_blockArr[1].col] != map_null ||
				p[m_blockArr[1].row - 1][m_blockArr[1].col] != map_null ||
				p[m_blockArr[1].row - 2][m_blockArr[1].col] != map_null ||
				p[m_blockArr[2].row - 1][m_blockArr[2].col] != map_null ||
				p[m_blockArr[2].row - 2][m_blockArr[2].col] != map_null ||
				p[m_blockArr[3].row - 1][m_blockArr[3].col] != map_null ||
				p[m_blockArr[3].row - 2][m_blockArr[3].col] != map_null
				)
			{
				return false;
			}
			break;
		case 1:
			if (p[m_blockArr[0].row ][m_blockArr[0].col - 1] != map_null ||
				p[m_blockArr[1].row ][m_blockArr[1].col - 1] != map_null ||
				p[m_blockArr[1].row ][m_blockArr[1].col + 1] != map_null ||
				p[m_blockArr[1].row ][m_blockArr[1].col + 2] != map_null ||
				p[m_blockArr[2].row ][m_blockArr[2].col + 1] != map_null ||
				p[m_blockArr[2].row ][m_blockArr[2].col + 2] != map_null ||
				p[m_blockArr[3].row ][m_blockArr[3].col + 1] != map_null ||
				p[m_blockArr[3].row ][m_blockArr[3].col + 2] != map_null
				)
			{
				return false;
			}
			break;
	}
	return true;
}

void _2::initBlock()
{
	m_blockType = rand() % 4;
	switch (m_blockType)
	{
		case 0:
		{
			m_blockArr[0].row = 3;
			m_blockArr[0].col = 4;
			m_blockArr[1].row = 3;
			m_blockArr[1].col = 5;
			m_blockArr[2].row = 2;
			m_blockArr[2].col = 5;
			m_blockArr[3].row = 3;
			m_blockArr[3].col = 6;
			break;
		}
		case 1:
		{
			m_blockArr[0].row = 2;
			m_blockArr[0].col = 5;
			m_blockArr[1].row = 3;
			m_blockArr[1].col = 5;
			m_blockArr[2].row = 3;
			m_blockArr[2].col = 6;
			m_blockArr[3].row = 4;
			m_blockArr[3].col = 5;
			break;
		}
		case 2:
		{
			m_blockArr[0].row = 3;
			m_blockArr[0].col = 6;
			m_blockArr[1].row = 3;
			m_blockArr[1].col = 5;
			m_blockArr[2].row = 4;
			m_blockArr[2].col = 5;
			m_blockArr[3].row = 3;
			m_blockArr[3].col = 4;
			break;
		}
		case 3:
		{
			m_blockArr[0].row = 4;
			m_blockArr[0].col = 5;
			m_blockArr[1].row = 3;
			m_blockArr[1].col = 5;
			m_blockArr[2].row = 3;
			m_blockArr[2].col = 4;
			m_blockArr[3].row = 2;
			m_blockArr[3].col = 5;
			break;
		}
	}
}


void _2::changBlock()
{
	switch (m_blockType)
	{
		case 0:
			m_blockArr[0].row = m_blockArr[1].row - 1;
			m_blockArr[0].col = m_blockArr[1].col;
			m_blockArr[2].row = m_blockArr[1].row ;
			m_blockArr[2].col = m_blockArr[1].col + 1;
			m_blockArr[3].row = m_blockArr[1].row + 1;
			m_blockArr[3].col = m_blockArr[1].col;
			m_blockType = 1;
			break;
		case 1:
			m_blockArr[0].row = m_blockArr[1].row;
			m_blockArr[0].col = m_blockArr[1].col + 1;
			m_blockArr[2].row = m_blockArr[1].row + 1;
			m_blockArr[2].col = m_blockArr[1].col;
			m_blockArr[3].row = m_blockArr[1].row;
			m_blockArr[3].col = m_blockArr[1].col - 1;
			m_blockType = 2;
			break;
		case 2:
			m_blockArr[0].row = m_blockArr[1].row + 1;
			m_blockArr[0].col = m_blockArr[1].col;
			m_blockArr[2].row = m_blockArr[1].row;
			m_blockArr[2].col = m_blockArr[1].col - 1;
			m_blockArr[3].row = m_blockArr[1].row - 1;
			m_blockArr[3].col = m_blockArr[1].col;
			m_blockType = 3;
			break;
		case 3:
			m_blockArr[0].row = m_blockArr[1].row;
			m_blockArr[0].col = m_blockArr[1].col - 1;
			m_blockArr[2].row = m_blockArr[1].row - 1;
			m_blockArr[2].col = m_blockArr[1].col;
			m_blockArr[3].row = m_blockArr[1].row;
			m_blockArr[3].col = m_blockArr[1].col + 1;
			m_blockType = 0;
			break;
	}
}

bool _2::isChange(PARR p)
{
	switch (m_blockType)
	{
		case 0:
			if (p[m_blockArr[0].row - 1][m_blockArr[0].col] != map_null ||
				p[m_blockArr[1].row + 1][m_blockArr[1].col] != map_null ||
				p[m_blockArr[3].row + 1][m_blockArr[3].col] != map_null ||
				p[m_blockArr[3].row - 1][m_blockArr[3].col] != map_null
				)
			{
				return false;
			}
			break;
		case 1:
			if (p[m_blockArr[0].row][m_blockArr[0].col + 1] != map_null ||
				p[m_blockArr[1].row][m_blockArr[1].col - 1] != map_null ||
				p[m_blockArr[3].row][m_blockArr[3].col + 1] != map_null ||
				p[m_blockArr[3].row][m_blockArr[3].col - 1] != map_null
				)
			{
				return false;
			}
			break;
		case 2:
			if (p[m_blockArr[0].row + 1][m_blockArr[0].col] != map_null ||
				p[m_blockArr[1].row - 1][m_blockArr[1].col] != map_null ||
				p[m_blockArr[3].row + 1][m_blockArr[3].col] != map_null ||
				p[m_blockArr[3].row - 1][m_blockArr[3].col] != map_null
				)
			{
				return false;
			}
			break;
		case 3:
			if (p[m_blockArr[0].row][m_blockArr[0].col - 1] != map_null ||
				p[m_blockArr[1].row][m_blockArr[1].col + 1] != map_null ||
				p[m_blockArr[3].row][m_blockArr[3].col + 1] != map_null ||
				p[m_blockArr[3].row][m_blockArr[3].col - 1] != map_null
				)
			{
				return false;
			}
			break;

	}
	return true;
}
