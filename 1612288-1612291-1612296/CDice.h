#pragma once
#include"CRand.h"
#include<string>

class CDice
{
	string m_sS[6];			//mảng 6 chuỗi <=> 6 mặt xúc xắc
public:
	string* input();		//cho phép nhập vào 6 chuỗi
	void set(string* s);	//khởi tạo 6 mặt xúc xắc với 6 chuỗi
	string initDice();		//tung xúc xắc, return 1 mặt mặt ngẫu nhiên
	string display(int i);	//in ra màn hình mặt i
};

