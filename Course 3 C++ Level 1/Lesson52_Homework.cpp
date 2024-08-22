#include <iostream>
using namespace std;

void CheckElement(int arr[10])
{
	for (int i = 0; i < 10; i++)
	{
		if(arr[i] == 20)
		{
			cout << "Position is " << i + 1 << endl;
			break;
		}
	}
}

int main()
{
	int arr[10] = { 10,22,44,55,33,20,99,88,99,100 };
	CheckElement(arr);
}