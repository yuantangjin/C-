#pragma once
class CBlock
{
protected:
	//用这个结构体数组里面的值，表示地图中的行列，构成一个方块
	MyPoint m_blockArr[BLOCK_NUM];
	int m_blockType;//方块类别
public:
	CBlock();
	~CBlock();
public:
	virtual void initBlock();//初始化方块
	virtual void changBlock();//旋转方块
	virtual bool isChange(PARR p);
public:
	void setBlockDown();//方块下落
	void setBlockMove(bool left=true);//方块的左右移动
	//获取方块的位置
	MyPoint const * getBlockArr()const {
		 return m_blockArr;
	}
};

class _1 :public CBlock//长条
{
public:
	virtual void initBlock();//初始化方块
	virtual void changBlock();	//旋转方块
	virtual bool isChange(PARR p);//判断方块能否旋转
};

class _2 :public CBlock 
{
	virtual void initBlock(); // 初始化方块
	virtual void changBlock();	//旋转方块
	virtual bool isChange(PARR p);//判断方块能否旋转
};