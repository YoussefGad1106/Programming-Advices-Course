#include <iostream>
#include <string>
using namespace std;

string ReadText()
{
	string text = "";
	
	cout << "Enter your Text : " << endl;
	getline(cin, text);

	return text;
}

string EncryptText(string Text, short EncryptionKey)
{
	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int)Text[i] + EncryptionKey);
	}

	return Text;
}

string DecryptText(string Text, short EncryptionKey)
{
	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int)Text[i] - EncryptionKey);
	}

	return Text;
}

int main()
{
	string Text = ReadText();
	const short EncryptionKey = 2;

	string AfterEncryption = EncryptText(Text, EncryptionKey);
	string AfterDecryption = DecryptText(AfterEncryption, EncryptionKey);

	cout << "Text Before Encryption : " << Text << endl;
	cout << "Text After Encryption : " << AfterEncryption << endl;
	cout << "Text After Decryption : " << AfterDecryption << endl;
}
