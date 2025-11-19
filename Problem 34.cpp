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

char ReadChar()
{
	char C;
	cout << "Please Enter a letter : ";
	cin >> C;
	return C;
}

bool IsVowel(char c)
{
	char arr[5] = { 'a','e','i','o','u' };
	c = tolower(c);

	for (int i = 0;i < 5;i++)
	{
		if (c == arr[i])
		{
			return true;
		}
	}
	return false;
}

void CountVowelInString(string S)
{
	cout << "vowels are : ";
	for (int i = 0; i < S.length();i++)
	{
		if (IsVowel(S[i]))
		{
           	cout << S[i] << " ";
		}
	}
}

int main()
{
	CountVowelInString(ReadString());
}
