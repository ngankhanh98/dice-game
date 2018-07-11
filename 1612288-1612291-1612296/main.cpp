#include "CRand.h"
#include "CDice.h"
#include "CDiceGame.h"

int main()
{
	CDiceGame game;
	
	int i;
	do {
		cout << "What's type game you wanna do?" << endl;
		cout << "1. fish, prawn, crab, rooster, squash, stag" << endl;
		cout << "2. Your own type :v" << endl;
		cin >> i;
	} while (!(i == 1 || i == 2));

	fflush(stdin);
	game.initDiceGame(i);
	game.diceGamePlay();

	system("pause");
	return 0;
}
