#include <iostream>
using namespace std;

// Prof Answer

struct strInfo
{
	short Age;
	bool License , HasRecommendation;
};

strInfo ReadInfo()  // He used a function of struct type to return the whole struct
{
	strInfo Info;
	
	cout << "Please Enter your Age : \n";
	cin >> Info.Age;

	cout << "Have you got a Driver License ? 1/0 \n";
	cin >> Info.License;

  cout << "Have you got a Recommendation ? 1/0 \n";
	cin >> Info.HasRecommendation;
 
	retrun Info;
}

bool IsAccepted(strInfo Info)
{
	return (Info.Age > 21 && Info.License) || (Info.HasRecommendation) ;  // True by default == 1 
}
void PrintResult(strInfo Info)
{
	if (IsAccepted(Info))
	{
		cout << "Hired\n";
	}
	else
	{
		cout << "Rejected\n";
	}
}

int main()
{
	PrintResult(ReadInfo());
}



/***************************/


// My Answer

struct strInfo
{
	short Age;
	bool License , HasRecommendation;
};

void ReadInfo(strInfo &info)
{
	cout << "Please Enter your Age : \n";
	cin >> info.Age;

	cout << "Have you got a Driver License ? 1/0 \n";
	cin >> info.License;

  cout << "Have you got a Recommendation ? 1/0 \n";
	cin >> Info.HasRecommendation;
}

void PrintResult(strInfo info)
{
	if ((info.Age > 21 && info.License == 1) || (info.HasRecommendation))
	{
		cout << "Hired\n";
	}
	else
	{
		cout << "Rejected\n";
	}
}

int main()
{
	strInfo info;

	ReadInfo(info);
	PrintResult(info);
}
