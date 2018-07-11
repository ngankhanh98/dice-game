#include "CDiceGame.h"



void CDiceGame::initDiceGame(int i)
{
	string game[6]= { "fish", "prawn", "crab", "rooster", "squash", "stag" };
	string *s=new string[6];

	if (i == 1)
		for (int j = 0; j < 6; j++)
			*(s + j) = game[j];

	else
	{
		cout << "Type six sides of the dice!" << endl;
		s = m_dDice_1.input();
	}
	m_dDice_1.set(s);
	m_dDice_2.set(s);
	m_dDice_3.set(s);
}

int CDiceGame::diceGamePlay()
{
	double money;
	int i;
	int count = 0;

	do
	{
		cout << "Choose the side you want: " << endl;
		cout << "1. " << m_dDice_1.display(0) << endl;
		cout << "2. " << m_dDice_1.display(1) << endl;
		cout << "3. " << m_dDice_1.display(2) << endl;
		cout << "4. " << m_dDice_1.display(3) << endl;
		cout << "5. " << m_dDice_1.display(4) << endl;
		cout << "6. " << m_dDice_1.display(5) << endl;
		cin >> i;
	} while (i < 1 || i > 6);

	cout << "You chose " << m_dDice_1.display(i - 1) << endl;
	cout << "Input your money: ";
	cin >> money;
	cout << "Initiating..." << endl;

	CRand rand;
	rand.create();
	string re_1 = m_dDice_1.initDice();
	string re_2 = m_dDice_2.initDice();
	string re_3 = m_dDice_3.initDice();

	cout << re_1 << endl << re_2 << endl << re_3 << endl;

	if (m_dDice_1.display(i - 1) == re_1)
		count++;
	if (m_dDice_1.display(i - 1) == re_2)
		count++;
	if (m_dDice_1.display(i - 1) == re_3)
		count++;

	if (count == 0)
		money = 0;
	else
		money = money + pow(money, count);

	cout << "Your money: " << money;

	return 0;
}



