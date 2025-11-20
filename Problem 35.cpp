#include <iostream>
#include <iomanip>
#include <set>
#include <string>
using namespace std;

string ReadString()
{
	string S;
	cout << "Please Enter a String : ";
	getline(cin, S);
	return S;
}

void PrintEachWord(string S)
{
	bool inWord = true;
	for (int i = 0;i < S.length();i++)
	{
		if (S[i] != ' ')
		{
			if (!inWord)
			{
				cout << endl;
				inWord = true;
			}
			cout << S[i];
		}	
		else
		{
			inWord = false;
		}
	}
}

int main()
{
	PrintEachWord(ReadString());
}
