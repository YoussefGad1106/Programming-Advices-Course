#include<iostream>
#include<cstdlib>
using namespace std;

enum enRandom { Small = 0, Capital = 1, Special = 2, Digit = 3 };

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

char RandomCharacter(enRandom Random)
{
	switch (Random)
	{
	case enRandom::Small:
		return (char)RandomNumber(97, 122);

	case enRandom::Capital:
		return (char)RandomNumber(65, 90);

	case enRandom::Special:
		return (char)RandomNumber(33, 47);

	case enRandom::Digit:
		return (char)RandomNumber(48, 57);

	default:
		break;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	cout << RandomCharacter(enRandom::Small) << endl;
	cout << RandomCharacter(enRandom::Capital) << endl;
	cout << RandomCharacter(enRandom::Special) << endl;
	cout << RandomCharacter(enRandom::Digit) << endl;
}