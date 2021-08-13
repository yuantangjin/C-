#pragma once
#include"targetver.h"
#include<iostream>
#include<stdio.h>
#include<tchar.h>
#include<time.h>
#include<conio.h>

#include<Windows.h>
#pragma comment(lib,"Winmm.lib")

#include<easyx.h>
using namespace std;

#define MAP_ROW 22
#define MAP_COL 12
#define IMG_HEI 25
#define IMG_WID 25
enum { map_null, map_franme, map_block };
struct MyPoint
{
	int row, col;
};

#define	BLOCK_NUM 4
#define DEL_OBJ(p) {if(p!=NULL){delete p;p=NULL;}}
//定义了一个数组指针的别名   别名就是他自己  PARR
//PARR看做是一个类型
typedef char(*PARR)[MAP_COL];
#include"MyMap.h"
#include"Block.h"
#include"Manage.h"