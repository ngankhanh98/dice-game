#include "CRand.h"


void CRand::create()
{
	srand(time(NULL));
}

int CRand::createFrom_n(int n)
{
	int m = rand() % (n);
	return m;
}

int CRand::createFrom_a_b(int a, int b)
{
	create();
	return (rand() % (b - a + 1)) + a;
}

double CRand::createFloat()
{
	create();
	return 1.0*rand() / RAND_MAX;		
}

CRand::~CRand()
{
}
