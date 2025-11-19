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

void PrintFirstNumber(string S)
{
	bool IsFirstLetter = true;

	for (int i = 0;i < S.length();i++)
	{
		if (S[i] != ' ' && IsFirstLetter)
		{
			cout << S[i] << " ";
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
}

int main()
{
	PrintFirstNumber(ReadString());
}
