#pragma once
#include<iostream>
#include<ctime>
#include <conio.h>
using namespace std;

class CRand
{
public:
	void create();						//phát sinh ngẫu nhiên hạt giống từ thời gian
	int createFrom_n(int n);			//phát sinh ngẫu nhiên từ [0,n]
	int createFrom_a_b(int a, int b);	//phát sinh ngẫu nhiên [a,b]
	double createFloat();				//phát sinh ngẫu nhiên float [0,1]	
	~CRand();
};

