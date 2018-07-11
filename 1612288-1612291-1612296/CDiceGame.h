#pragma once
#include "CDice.h"
#include <stdlib.h>
#include <Windows.h>

class CDiceGame
{
private:
	CDice m_dDice_1;		//xúc xắc 1
	CDice m_dDice_2;
	CDice m_dDice_3;
public:
	void initDiceGame(int i);	//khởi tạo các xúc xắc
	int diceGamePlay();			//tung các xúc xắc
};

