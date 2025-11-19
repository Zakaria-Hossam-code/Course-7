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

void CheckCapitalSmallLetters(string S)
{
	int capital = 0;
	int small = 0;
	for (int i = 0; i < S.length();i++)
	{
		if (isupper(S[i]))
		{
			capital++;
		}
		else if (islower(S[i]))
		{
			small++;
		}
	}
	cout << "String Length = " << S.length() << endl;
	cout << "Capital Letters = " << capital << endl;
	cout << "Small Letters = " << small << endl;
}

int main()
{
	
	CheckCapitalSmallLetters(ReadString());
}
