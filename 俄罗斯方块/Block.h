#pragma once
class CBlock
{
protected:
	//������ṹ�����������ֵ����ʾ��ͼ�е����У�����һ������
	MyPoint m_blockArr[BLOCK_NUM];
	int m_blockType;//�������
public:
	CBlock();
	~CBlock();
public:
	virtual void initBlock();//��ʼ������
	virtual void changBlock();//��ת����
	virtual bool isChange(PARR p);
public:
	void setBlockDown();//��������
	void setBlockMove(bool left=true);//����������ƶ�
	//��ȡ�����λ��
	MyPoint const * getBlockArr()const {
		 return m_blockArr;
	}
};

class _1 :public CBlock//����
{
public:
	virtual void initBlock();//��ʼ������
	virtual void changBlock();	//��ת����
	virtual bool isChange(PARR p);//�жϷ����ܷ���ת
};

class _2 :public CBlock 
{
	virtual void initBlock(); // ��ʼ������
	virtual void changBlock();	//��ת����
	virtual bool isChange(PARR p);//�жϷ����ܷ���ת
};