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

char ReadChar()
{
	char C;
	cout << "Please Enter a letter : ";
	cin >> C;
	return C;
}

void CountLetterInString(char C, string S)
{
	int counter = 0;
	for (int i = 0;i < S.length();i++)
	{
		if (S[i] == C)
		{
			counter++;
		}
	}
	cout << "Letter '" << C << "' count = " << counter;
}

int main()
{
	CountLetterInString(ReadChar(), ReadString());
}
