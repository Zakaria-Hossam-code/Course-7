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
	int COUNTER = 0;
	for (int i = 0;i < S.length();i++)
	{
		if (S[i] == C)
		{
			counter++;
		}

		if (tolower(S[i]) == C)
		{
			COUNTER++;
		}
	}
	cout << "Letter '" << C << "' count = " << counter << endl;
	cout << "Letter '" << C << "' ALL count = " << COUNTER << endl;
}

int main()
{
	CountLetterInString(ReadChar(), ReadString());
}
