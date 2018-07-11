#include "CDice.h"
using namespace std;



string * CDice::input()
{
	static string s[6];

	getline(cin.ignore(), s[0]);
	for (int i = 1; i < 6; i++)
	{
		getline(cin, s[i]);
	}
	return s;
}

void CDice::set(string* s)
{
	for (int i = 0; i < 6; i++)
	{
		m_sS[i] = s[i];
	}
}

string CDice::initDice()
{
	CRand rand;
	//rand.create();
	int i;
	i = rand.createFrom_n(6) + 1;
	return m_sS[i];
}

string CDice::display(int i)
{
	return m_sS[i];
}
