#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double S, P;
	int i, k;

	//While

	S = 0;
	i = 5;
	while (i <= 25)
	{
		k = 1;
		P = 1;
		while (k <= i)
		{
			P *= k;
			k++;
		}

		S += sqrt((1. * i) * (1. * i) + P) / i;
		i++;
	}
	cout << S << endl;

	//Do while

	S = 0;
	i = 5;

	do
	{
		k = 1;
		P = 1;
		do
		{
			P *= k;
			k++;
		} while (k <= i);
		S += sqrt((1. * i) * (1. * i) + P) / i;
		i++;
	} while (i <= 25);
	cout << S << endl;

	//For(++)

	S = 0;
	for (i = 1; i <= 25; i++)
	{
		P = 1;
		for (k = 1; k <= i; k++)
		{
			P *= k;
		}
		S += sqrt((1. * i) * (1. * i) + P) / i;
	}
	cout << S << endl;

	//For(--)

	S = 0;
	for (i = 25; i >= 1; i--)
	{
		P = 1;
		for (k = i; k >= 1; k--)
		{
			P *= k;
		}
		S += sqrt((1. * i) * (1. * i) + P) / i;
	}
	cout << S << endl;

	return 0;
}