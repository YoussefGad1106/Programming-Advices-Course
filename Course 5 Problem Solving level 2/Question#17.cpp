#include <iostream>
using namespace std;

void CheckAllPossiblePasswords(string pass)
{
    int count = 1;
    string word = "";

    for (int i = 65; i < 91; i++)
    {
        for (int j = 65; j < 91; j++)
        {
            for (int k = 65; k < 91; k++)
            {
                word = word + char(i);
                word = word + char(j); 
                word = word + char(k);

                cout << "Trial [" << count << "] : " << word << endl;

                if (word == pass)
                {
                    cout << "Password is: " << word << endl;
                    cout << "Found after " << count << " trial(s)\n";
                    return;  
                }

                count++;
                word = "";
            }
        }
    }

    
    cout << "Password not found in the range." << endl;
}

int main()
{
    string Password = "GAD";
    CheckAllPossiblePasswords(Password);
}
