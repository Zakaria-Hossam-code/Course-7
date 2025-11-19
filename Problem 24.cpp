#include <iostream>
#include <iomanip>
#include <set>
#include <string>
using namespace std;

string ReadString()
{
	string S;
	cout << "Please Enter Your String : ";
	getline(cin, S);
	return S;
}

void UPPER(string S)
{
	bool IsFirstLetter = true;

	for (int i = 0;i < S.length();i++)
	{
		if (S[i] != ' ' && IsFirstLetter)
		{
			S[i] = towupper(S[i]);
		}

		if (S[i] == ' ')
		{
			IsFirstLetter = true;
		}
		else
		{
			IsFirstLetter = false;
		}
	}
	cout << S;
}

int main()
{
	UPPER(ReadString());
}
